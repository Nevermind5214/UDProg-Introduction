#include "../../std_lib_facilities.h"

class Token {
public:
	char kind;	// what kind of token
	double value;	// for numbers: a value 
	string name;	//name for user defined tokens

	Token(char ch) :kind(ch), value(0) { } // make a Token from a char
	Token(char ch, double val) :kind(ch), value(val) { } // make a Token from a char and a double
	Token(char ch, string n) :kind(ch), name(n) { } // make a Token from a char and a double
};

class Token_stream {
public:											// make a Token_stream that reads from cin
	Token_stream() :full(false), buffer(0) { }	// The constructor just sets full to indicate that the buffer is empty

	Token get();	// get a Token (get() is defined elsewhere)
	void unget(Token t) { buffer = t; full = true; } // put a Token back
	// The unget() member function puts its argument back into the Token_stream's buffer:

	void ignore(char);
private:
	bool full;
	Token buffer;
};

// Token kinds
const char let = '#';
const char quit = 'Q';
const char print = ';';
const char number = '8';
const char name = 'a';
const char mysqrt = 's';
const char mypow = 'p';


Token Token_stream::get()
{
	if (full) { full = false; return buffer; }	//do we already have a Token ready?
												//remove token from buffer
	char ch;
	cin >> ch;  // note that >> skips whitespace (space, newline, tab, etc.)
	switch (ch) {
		case '(':
		case ')':
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case ';':	// for "print"
		case '=':	// for the variables
		return Token(ch);
		case '.':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		{	cin.unget();	// put digit back into the input stream
			double val;
			cin >> val;	// read a floating-point number
			return Token(number, val);	// const char number = '8'
		}
		default:
		if (isalpha(ch)) { // if it's a char but not one of the above
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s += ch;
			cin.unget(); // put digit back into the input stream
			if (s == "let") return Token(let); // make a new token
			if (s == "quit") return Token(quit); // this is where we quit
			if (s == "mysqrt") return Token(mysqrt); // square root
			if (s == "mypow") return Token(mypow); // power
			return Token(name, s);
		}
		error("Bad token");
		return 0;	//Return for: warning: control reaches end of non-void function
	}
}

// ignore until c
void Token_stream::ignore(char c)
{
	if (full && c == buffer.kind) {
		full = false;
		return;
	}
	full = false; // ignore token

	char ch;
	while (cin >> ch)
		if (ch == c) return;
}

class Variable {
public:
	string name;
	double value;
};

vector<Variable> names;

double get_value(string s)  // returns the value of a variable
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
	return 0;	//Return for: warning: control reaches end of non-void function
}

void set_value(string s, double d)  // sets the value of a user defined variabla
{
	for (int i = 0; i <= names.size(); ++i)
	{
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
		error("set: undefined name ", s);
	}
}

bool is_declared(string s)  // checks whether or not a user defined
							// variable is already declared or not
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts;

double expression();  // defined elsewhere

// deal with numbers, negative numbers and parentheses
double primary()
{
	Token t = ts.get();
	switch (t.kind) {
		case '(':   // handle '(' expression ')'
		{	double d = expression();
			t = ts.get();
			if (t.kind != ')') error("'(' expected");
		}
		case '-':     // deal with negative numbers
		return -primary();
		case number:	// deal with normal numbers
		return t.value;
		case name:	// deal with  variables
		return get_value(t.name);
		case mysqrt:
		return 0;
		case mypow:
		return 0;
		default:
		error("primary expected");
		return 0;   //Return for: warning: control reaches end of non-void function
	}
}

// deal with *, /, and %
double term()
{
	double left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
			case '*':
			left *= primary();
			break;
			case '/':
			{	double d = primary();
				if (d == 0) error("divide by zero");
				left /= d;
				break;
			}
        	case '%':
        	{
            	left = fmod(left, primary());
            	t = ts.get();
            	break;
            }
			default:
			ts.unget(t);	// put t back into the token stream
			return left;
		}
	}
}

// deal with + and -
double expression()
{
	double left = term();	// read and evaluate a Term
	while (true) {
		Token t = ts.get();	// get the next token from token stream
		switch (t.kind) {
			case '+':
			left += term();	// evaluate Term and add
			break;
			case '-':
			left -= term();	// evaluate Term and subtract
			break;
			default:
			ts.unget(t);	// put t back into the token stream
			return left;	// finally: no more + or -: return the answer
		}
	}
}

double declaration()  // this happens when the user enters let
{
	Token t = ts.get(); // get the next token from token stream
	if (t.kind != 'a') error("name expected in declaration");  //If its not a name
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	double d = expression();
	names.push_back(Variable{name, d});  // we add our new variable to the Variables vector
	return d;
}

double statement()
{
	Token t = ts.get();
	switch (t.kind) {
		case let:
		return declaration();
		default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

void calculate()
{
	while (true) try {
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get(); // ';' for "print now"
		if (t.kind == quit) return;	// 'x' for quit
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch (runtime_error& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

int main()

try {
	calculate();	//we moved our while loop outside of the main (idk why tho)
	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
}

catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}
