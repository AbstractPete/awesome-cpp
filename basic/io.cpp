#include <iostream>
#include <string>
#include <sstream>
#include <random>

using namespace std;


int main(){
	
	string name;
	string age;
	
	cout << "[?] What's your name: ";
	getline(cin,name);
	cout << "[?] How old are You: ";
	getline(cin,age);
	
	cout << "Verify your data: \n"
		 << " *** Name -> " << name << endl
		 << " *** Age -> " << age
		 << endl 
		 << endl
		 << endl;

	
	cout	<< "!!!!  Quiz section !!!!" << endl;
	int a = rand() % 10 + 1;
	int b = rand() % 10 + 1;
	int result;
	cout	<<"a:" << a << ", b: " << b << "\n" << "a+b = ";
	bool f = true;
	cin >> result;
	while(f){
		
	
		if(result == a + b){
			cout << "[!] well done\n";
			f = false;
			
		}else{
			cout << "try again, pal\n";
			cout << "a+b = ";
			cin >> result;
		}
	}
	return 0;
}
