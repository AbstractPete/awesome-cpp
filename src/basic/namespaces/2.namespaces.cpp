#include <iostream>

namespace A{
	void log(){
		std::cout << "namespace - 'A'" << std::endl;
	}
}
namespace B{
	void log(){
		std::cout << "namespace - 'B'" << std::endl;
	}
}


using namespace B;
int main(){
	//call from A namespace
	A::log();
	//call from B namespace
	log();
	
	return 0;
}
