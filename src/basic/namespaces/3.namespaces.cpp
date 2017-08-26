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
	namespace B1{
		void log(){
			std::cout << "namespace - 'B1'" << std::endl;
		}
	}
}


using namespace B::B1;
int main(){
	//call from A namespace
	A::log();
	//call from B1 namespace
	log();
	// call from B namespace
	B::log();
	
	return 0;
}
