#include <iostream>
#include <windows.h>
int grow_old(int a,int b){	
	a = a + 50;
	b = b + 50;
	std::cout << "In function\n";
	std::cout << "Frodo age: " << a << std::endl;
    std::cout << "Pipin age: " << b << std::endl;
    std::cout << "--------------------------------------\n";
}



int main(){
	int FrodoAge = 20;
	int PipinAge = 20;
	
	std::cout << "Before function\n";
    std::cout << "Frodo age: " << FrodoAge << std::endl;
    std::cout << "Pipin age: " << PipinAge << std::endl;
    std::cout << "--------------------------------------\n";
	grow_old(20,20);

	std::cout << "After function\n";
    std::cout << "Frodo age: " << FrodoAge << std::endl;
    std::cout << "Pipin age: " << PipinAge << std::endl;
    std::cout << "\n";
	
	
	
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hcon,12);
	std::cout << "--------------------------------------\n";
	std::cout << ":p maybe it could be useful\n";
	std::cout << "--------------------------------------\n";
	SetConsoleTextAttribute(hcon,15);
	std::cout << "";
	return 0;
}
