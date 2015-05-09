/* wtf - auto */
#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

template<typename T, typename E>
auto add(T t,E e) -> decltype(t+e){
	return t+e;
}

void typeIs(string type, auto typeValue){
	cout << "should be " << type <<" -> " << typeid(typeValue).name() << endl;
}

int main(){
	cout << "Subject -> AUTO\n";
	auto charValue = 'h'; // 1 byte
	auto boolValue = false; // 1 byte
	auto shortValue = 12; // 2 bytes
	auto intValue = 1; // 4 bytes
	auto longValue = 123; // 4 bytes
	auto floatValue = 1.5f; // 4 bytes
	auto doubleValue = 1.9; // 8 bytes
	typeIs("char",charValue);
	typeIs("bool",boolValue);
	typeIs("short",shortValue);
	typeIs("int",intValue);
	typeIs("long",longValue);
	typeIs("float",floatValue);
	typeIs("double",doubleValue);
	
	auto val = add(1,-5.5893);
	cout << "return auto:\n";
	typeIs("double",val);
	
	cout << "cycles: \n";
	
	vector<int> v = {0,2,10,3,1,4};
	for(auto i : v) //access by value, the type of i is int
		cout << "["<<i<<"], " ;
	cout << "\n";
	
	for(auto&& i : v) // access by reference, the type of i is int&
		cout << "["<<i<<"], " ;
	cout << "\n";
	
}
