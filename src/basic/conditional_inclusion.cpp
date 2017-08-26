#define Colin 2
#include <iostream>


int main(){
	#ifdef Colin
	std::cout << "1: yeah!\n";
	#else
	std::cout << "1: nope!\n";
	#endif
	
	
	#ifndef Colin
		std::cout << "2: no 1\n";
	#elif Colin == 2
		std::cout << "2: yes\n";
	#else
		std::cout << "2: no 2\n";	
	#endif	
	
	
	#if !defined(Peter) && (Colin < 1+1 + 5)
		std::cout << "3: yeah!\n";
	#endif
	
	
}
