//import java.util.Arrays;
import java.util.*;
public class Parser {

    private Symtab symtab = new Symtab();

    
    // the first sets.
    // note: we cheat sometimes:
    // when there is only a single token in the set,
    // we generally just compare tkrep with the first token.
    TK f_declarations[] = {TK.VAR, TK.none};
    TK f_statement[] = {TK.ID, TK.PRINT, TK.IF, TK.DO, TK.FA, TK.SKIP, TK.STOP, TK.BREAK, TK.DUMP, TK.none};
    TK f_print[] = {TK.PRINT, TK.none};
    TK f_assignment[] = {TK.ID, TK.none};
    TK f_if[] = {TK.IF, TK.none};
    TK f_do[] = {TK.DO, TK.none};
    TK f_fa[] = {TK.FA, TK.none};
    TK f_expression[] = {TK.ID, TK.NUM, TK.LPAREN, TK.none};
	TK f_skip[] = {TK.SKIP, TK.none};
	TK f_stop[] = {TK.STOP, TK.none};
	TK f_last[] = {TK.OD, TK.FI, TK.OD, TK.AF, TK.none};
	TK f_break[] = {TK.BREAK, TK.none};
	TK f_dump[] = {TK.DUMP, TK.none};

    // tok is global to all these parsing methods;
    // scan just calls the scanner's scan method and saves the result in tok.
    private Token tok; // the current token
	private int maxCount = 0;
	private boolean breakValid = false;
	private int loopCount = 0;
	private Stack<Integer> looplabel = new Stack<Integer>();
	//private Map<String, Object> dumpVars = new HashMap();
	//private boolean assign = false;
	//private String currAssign = new String();
	//{looplabel.push(1);}
    private void scan() {
        tok = scanner.scan();
    }

    private Scan scanner;
    Parser(Scan scanner) {
        this.scanner = scanner;
        looplabel.push(1);
        scan();
        program();
        if( tok.kind != TK.EOF )
            parse_error("junk after logical end of program");
        symtab.reportVariables();
    }
    
    

    // print something in the generated code
    private void gcprint(String str) {
        System.out.println(str);
    }
    // print identifier in the generated code
    // it prefixes x_ in case id conflicts with C keyword.
    private void gcprintid(String str) {
        System.out.println("x_"+str);
    }

    private void program() {
        // generate the E math functions:
        gcprint("int esquare(int x){ return x*x;}");
        gcprint("#include <math.h>");
		gcprint("#include <stdlib.h>");
		gcprint("#include <stdio.h>");
        gcprint("int esqrt(int x){ double y; if (x < 0) return 0; y = sqrt((double)x); return (int)y;}");
        //insert modulo code here
        gcprint("int emodulo(int a , int b){if(a==0){return 0;}if(b==0){printf(\"\\nmod(a,b) with b=0\\n\");exit(1);};if(b < 0){if(a<0){return -emodulo(-a,-b);}int temp = emodulo(a, -b);if(temp==0){return 0;}else{return -(-b - temp);}}int result = a % b;if(result < 0){result+=b;}return result;}");
		gcprint("int emax(int a, int b){if(a > b){return a;} else{return b;}}");
        gcprint("#include <stdio.h>");
        gcprint("int main() {");
		block();
        gcprint("return 0; }");
    }

    private void block() {
        symtab.begin_st_block();
	gcprint("{");
        if( first(f_declarations) ) {
            declarations();
        }
        statement_list();
        symtab.end_st_block();
	gcprint("}");
    }

    private void declarations() {
        mustbe(TK.VAR);
        while( is(TK.ID) ) {
            if( symtab.add_var_entry(tok.string,tok.lineNumber) ) {
                gcprint("int");
                gcprintid(tok.string);
                String varName = tok.string;
                gcprint("= -12345;");
            }
            scan();
        }
        mustbe(TK.RAV);
    }

    private void statement_list(){
        while( first(f_statement) ) {
            statement();
        }
    }

    private void statement(){
        if( first(f_assignment) )
            assignment();
        else if( first(f_print) )
            print();
        else if( first(f_if) )
            ifproc();
        else if( first(f_do) )
            doproc();
        else if( first(f_fa) )
            fa();
		else if( first(f_skip) )
			skip();
		else if( first(f_stop) )
			stop();
		else if( first(f_break))
			ebreak();
		else if( first(f_dump) )
			edump();
        else
            parse_error("statement");
    }

    private void assignment(){
        String id = tok.string;
        int lno = tok.lineNumber; // save it too before mustbe!
        mustbe(TK.ID);
//        assign = true;
//        currAssign = id;
        referenced_id(id, true, lno);
        gcprintid(id);
        mustbe(TK.ASSIGN);
        gcprint("=");
        expression();
        gcprint(";");
    }

    private void print(){
        mustbe(TK.PRINT);
        gcprint("printf(\"%d\\n\", ");
        expression();
        gcprint(");");
    }

    private void ifproc(){
        mustbe(TK.IF);
        guarded_commands(TK.IF);
        mustbe(TK.FI);
    }

    private void doproc(){
        mustbe(TK.DO);
		breakValid = true;
		loopCount = loopCount + 1;
		looplabel.push(1);
        gcprint("while(1){");
        guarded_commands(TK.DO);
        gcprint("}");
        mustbe(TK.OD);
		loopCount = loopCount - 1;
		looplabel.pop();
		//this next long line convert the stack to a string and get rid of "[]", ",", and empty space
		String values = "label";
		for(int i : looplabel) {
			values += "_" + i;
		}
		gcprint(values + ":;");
		looplabel.push(looplabel.pop()+1);
		if(loopCount == 0)
			breakValid = false;
    }

    private void fa(){
        mustbe(TK.FA);
		breakValid = true;
		loopCount = loopCount + 1;
		looplabel.push(1);
        gcprint("for(");
        String id = tok.string;
        int lno = tok.lineNumber; // save it too before mustbe!
        mustbe(TK.ID);
        referenced_id(id, true, lno);
        gcprintid(id);
        mustbe(TK.ASSIGN);
        gcprint("=");
        expression();
        gcprint(";");
        mustbe(TK.TO);
        gcprintid(id);
        gcprint("<=");
        expression();
        gcprint(";");
        gcprintid(id);
        gcprint("++)");
        if( is(TK.ST) ) {
            gcprint("if( ");
            scan();
            expression();
            gcprint(")");
        }
        commands();
        mustbe(TK.AF);
        looplabel.pop();
        //this next long line convert the stack to a string and get rid of "[]", ",", and empty space
		//String values = looplabel.toString().replaceAll("\\[", "").replaceAll("]", "").replaceAll(",", "").replaceAll("\\s","");
		String values = "label";
		for(int i : looplabel) {
			values += "_" + i;
		}

		
		gcprint(values + ":;");
		looplabel.push(looplabel.pop()+1);
		loopCount = loopCount - 1;
		if(loopCount == 0)
			breakValid = false;
    }
	
	private void skip(){
		mustbe(TK.SKIP);
		
	}
	
	private void stop(){
		
		mustbe(TK.STOP);
		
		if(!is(TK.EOF) && !( first(f_last)))
			warning("statement(s) follows stop statement"); 
			
		
		gcprint("exit(0);");
				
	}
	
	private void ebreak(){
		
		if(breakValid){
			mustbe(TK.BREAK);
			if(is(TK.NUM)) {
				int break_num = Integer.parseInt(tok.string);
				if (break_num == 0) {
					warning("break 0 statement ignored");
					mustbe(TK.NUM);
				}
				//String debug = Integer.toString(loopCount);
				//gcprint("APPARTMENTLY LOOP COUNNT IS" + debug);
				else if (break_num > loopCount) {
					warning("break statement exceeding loop nesting ignored");
					mustbe(TK.NUM);
				}
				else {
					String values = "label";
					for(int i = 0; i < looplabel.size() - break_num; i++) {
						values += "_" + looplabel.get(i);
					}
				
				gcprint("goto " + values + ";");
				mustbe(TK.NUM);
        if(!is(TK.EOF) && !( first(f_last)))
				  warning("statement(s) follows break statement");
				}
				//mustbe(TK.NUM);
			}
			
			else {
				gcprint("break;");
			
		
			
			if(!is(TK.EOF) && !( first(f_last)))
				warning("statement(s) follows break statement"); 
			}
			
		}
		else{
			warning("break statement outside of loop ignored");
			mustbe(TK.BREAK);
		}
		
	}
	
	private void edump() {
		mustbe(TK.DUMP);
		gcprint("printf(\"+++ dump of all levels begin +++\\n\");");
		Stack<ArrayList<Entry>> table = symtab.getSymTab();
		for( ArrayList<Entry> block: table) {
		    for (Entry entry: block) {
				gcprint("printf(\"%12d %3d %3d %s\\n\"," + "x_" + entry.getName() + "," + entry.getLineNumber() + "," + entry.getLevel() + "," + "\"" + entry.getName() + "\");" );
			}	
		}
		gcprint("printf(\"--- dump of all levels end ---\\n\");");
	}

    private void guarded_commands(TK which){
        guarded_command();
        while( is(TK.BOX) ) {
            scan();
            gcprint("else");
            guarded_command();
        }
        if( is(TK.ELSE) ) {
            gcprint("else");
            scan();
            commands();
        }
        else if( which == TK.DO )
            gcprint("else break;");
    }

    private void guarded_command(){
        gcprint("if(");
        expression();
        gcprint(")");
        commands();
    }

    private void commands(){
        mustbe(TK.ARROW);
        gcprint("{");/* note: generate {} to simplify, e.g., st in fa. */
        block();
        gcprint("}");
    }

    private void expression(){
        simple();
        while( is(TK.EQ) || is(TK.LT) || is(TK.GT) ||
               is(TK.NE) || is(TK.LE) || is(TK.GE)) {
            if( is(TK.EQ) ) gcprint("==");
            else if( is(TK.NE) ) gcprint("!=");
            else gcprint(tok.string);
            scan();
            simple();
        }
    }

    private void simple(){
        term();
        while( is(TK.PLUS) || is(TK.MINUS) ) {
            gcprint(tok.string);
            scan();
            term();
        }
    }

    private void term(){
        factor();
        while(  is(TK.TIMES) || is(TK.DIVIDE) || is(TK.MOD)) {
            gcprint(tok.string);
            scan();
            factor();
        }
    }

    private void factor(){
    	if(is(TK.COMMA)){
        	gcprint(",");
        	scan();
        	expression();
        }
        if( is(TK.LPAREN) ) {
            gcprint("(");
            scan();
            expression();
            mustbe(TK.RPAREN);
            gcprint(")");
        }
        else if( is(TK.SQUARE) ) {
            gcprint("esquare(");
            scan();
            expression();
            gcprint(")");
        }
        else if( is(TK.SQRT) ) {
            gcprint("esqrt(");
            scan();
            expression();
            gcprint(")");
        }
        else if( is(TK.MODULO) ) {
        	gcprint("emodulo(");
        	predef();
        	gcprint(")");
        }
        else if( is(TK.MAX) ) {
			maxCount = maxCount + 1;
			if(maxCount > 5)
				parse_error("max expressions nested too deeply (> 5 deep)");
        	gcprint("emax(");
        	predef();
        	gcprint(")");
			maxCount = maxCount - 1;
        }
        else if( is(TK.ID) ) {
            referenced_id(tok.string, false, tok.lineNumber);
            gcprintid(tok.string);
            scan();
        }
        else if( is(TK.NUM) ) {
            gcprint(tok.string);
            scan();
        }
        else
            parse_error("factor");
    }
    
    private void predef() {
    	scan();
    	scan();
    	expression();
    	mustbe(TK.COMMA);
        gcprint(","); 	
        expression();
    	mustbe(TK.RPAREN);
    }

    // be careful: use lno here, not tok.lineNumber
    // (which may have been advanced by now)
    private void referenced_id(String id, boolean assigned, int lno) {
        Entry e = symtab.search(id);
        if( e == null) {
            System.err.println("undeclared variable "+ id + " on line "
                               + lno);
            System.exit(1);
        }
        e.ref(assigned, lno);
    }

    // is current token what we want?
    private boolean is(TK tk) {
        return tk == tok.kind;
    }

    // ensure current token is tk and skip over it.
    private void mustbe(TK tk) {
        if( ! is(tk) ) {
            System.err.println( "mustbe: want " + tk + ", got " +
                                    tok);
            parse_error( "missing token (mustbe)" );
        }
        scan();
    }
    boolean first(TK [] set) {
        int k = 0;
        while(set[k] != TK.none && set[k] != tok.kind) {
            k++;
        }
        return set[k] != TK.none;
    }

    private void parse_error(String msg) {
        System.err.println( "can't parse: line "
                            + tok.lineNumber + " " + msg );
        System.exit(1);
    }
	
	private void warning(String msg) {
		System.err.println( "warning: on line " + tok.lineNumber + " " + msg );
		
	}
	
	
	
	
}
