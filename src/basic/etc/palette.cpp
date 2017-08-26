#include <iostream>
#include <windows.h>
// our sweety collors
enum ConsoleColor {
        Black = 0,
        Blue = 1,
        Green = 2,
        Cyan = 3,
        Red = 4,
        Magenta = 5,
        Brown = 6,
        LightGray = 7,
        DarkGray = 8,
        LightBlue = 9,
        LightGreen = 10,
        LightCyan = 11,
        LightRed = 12,
        LightMagenta = 13,
        Yellow = 14,
        White = 15,
        ends = 16
    };


int main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	/* 
	for(int i = 0; i <= 15; i++ ){
		SetConsoleTextAttribute(hConsole, (WORD) ((i << 4) | 5));
		std::cout << "  \t"<< i <<"  \t" << "\n";
	}
	*/
	
	for ( int fooInt = Black; fooInt != ends; fooInt++ ){
  		ConsoleColor foo = static_cast<ConsoleColor>(fooInt);
  		SetConsoleTextAttribute(hConsole, (WORD) ((foo << 4) | 5));
   		std::cout << "  \t"<< fooInt <<"  \t" << "\n";
	}
	SetConsoleTextAttribute(hConsole, (WORD) ((0 << 4) | 5));	
	return 0;
}
