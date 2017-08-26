#include <iostream>
using namespace std;

int main(){
	
	// '+' -  operator, adds two operands 
	int add = 1 + 1;
	cout << "add(1+1) = " << add << endl;
	// '-' - operator, substracts operands
	int sub = 1 - 5;
	cout << "sub(1-5) = " << sub << endl;
	// '*' - operator, multiplies both operators
	int mul = 1 * 5;
	cout << "mul(1*5) = " << mul << endl;
	// '/' - operator, divides operators
	int div = 1 / 5;
	cout << "div(1/5) = " << div << endl;
	// '%' - modulus operator
	int mod = 1 % 5;
	cout << "div(1mod5) = " << mod << endl; 
	// increment(++)/decrement(--) 
	int count = 6;
	cout << "postfix form increment" <<endl;
	cout << "count =" << count << endl; 
	cout << "inc(count) =" << count++ << endl; 
	cout << "check again, count = " << count << endl; 
	count = 6;
	cout << "infix form increment" <<endl;
	cout << "count =" << count << endl; 
	cout << "inc(count) = " << ++count << endl; 
	cout << "check again, count = " << count << endl; 
	
	
	return 0;
}
