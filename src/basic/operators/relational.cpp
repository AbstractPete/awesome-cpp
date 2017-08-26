#include <iostream>
#include <string>
using namespace std;

string is(int a){
	if(a){
		return "true";
	}else{
		return "false";
	}
}

int main(){
	// == (equal)
	int a = 1;
	int b = 1;
	bool isEqual = a == b;
	
	cout << "a("<< a <<") == b("<< b <<") : " << is(isEqual) <<"("<< isEqual <<")" << endl;
	++b;
	isEqual = a == b;
	cout << "a("<< a <<") == b("<< b <<") : " << is(isEqual) <<"("<< isEqual <<")" << endl;
	// != (not equal)
	bool isNotEqual = a != b;
	
	cout <<"a("<< a <<") != b("<< b <<") : " << is(isNotEqual) << "(" << isNotEqual <<")" << endl;
	--b;
	isNotEqual = a != b;
	cout <<"a("<< a <<") != b("<< b <<") : " << is(isNotEqual) << "(" << isNotEqual <<")" << endl;
	
	
	//Assume variable A holds 1 and variable B holds 10
	int A = 1;
	int B = 10;
	
	cout << "A(" << A << ")" << " \t<\t " << "B(" << B << ") : " << is(A < B) << endl;
	
	cout << "A(" << A << ")" << " \t>\t " << "B(" << B << ") : " << is(A > B) << endl;
	
	cout << "A(" << A << ")" << "\t=<\t" << "B(" << B << ") : " << is(A >= B) << endl;
	
	cout << "A(" << A << ")" << "\t<=\t" << "B(" << B << ") : " << is(A <= B) << endl;
	
	return 0;
}
