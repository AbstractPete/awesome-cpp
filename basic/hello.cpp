#include <iostream>
#include <thread>
#include <string>
#include <windows.h>

std::string upper(std::string name){
	for(int i = 0; i < name.size(); i++) {
    		name.at(i) = toupper(name.at(i));
	}
	return name;
}


int main(){
	
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	std::string name;
	SetConsoleTextAttribute(hConsole, 6);
	unsigned int nthreads = std::thread::hardware_concurrency();
	std::cout << "Hello, Sir! \n";
	if(nthreads > 1){ std::cout << nthreads << " cores are waiting yours to command!\n"; }
	else{ std::cout << nthreads << " cores are waiting yours to command!\n" << "\n"; } 


	std::cout << "It reads 'The Doors of Durin - Lord of Moria. Speak, friend, and enter.'\n";
	std::cout << "[?] your answer: ";

	std::string password = "MELLON";

	bool rightAnswer = true;
	int tryings = 0;
	while(rightAnswer){
		if(tryings ==  0){
			std::cin >> name;
			tryings++;
		}else{
			std::cout << "[?] let's try again: ";
			std::cin >> name;
			tryings++;
		}
		
		if(upper(name) == password){
			std::cout  << "\nThe stone doors slowly swing open, rumbling deeply. The Fellowship enters Moria.\n";
			rightAnswer = false;
		} else{
			std::cout << "Nothing's happening.\n";
		}	
		
	}
	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "Farewell, pal!";
	SetConsoleTextAttribute(hConsole, 6);
	return 0;
}




