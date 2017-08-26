#include <iostream>
using namespace std;

#define CONTEXT(name,a) int getCtx##name(){ return a;}
	CONTEXT(Inner,42)
	CONTEXT(Ext,123)
	CONTEXT(Empty,0)
#undef CONTEXT

#define Box(color,a) string getItem##color(){return (a + string("Box"));}	

	Box(Red,"Red")
	Box(Blue,"Blue")
#undef Box

#define CONSOLE(a) cout << "Warn:"<< __LINE__ << " [" << __DATE__<< " " << __TIME__ "]: " << #a << endl;

int main(){
	cout << "************ EXAMPLE 1 ************"<< endl;
	cout << "Inner context: " << getCtxInner() << endl;
	cout << "Ext context: " << getCtxExt() << endl;
	cout << "Empry context: " << getCtxEmpty() << endl;
	cout << "************ EXAMPLE 2 ************"<<endl;
	cout << "RedBox: " << getItemRed() << endl;
	cout << "RedBox: " << getItemBlue() << endl;
	cout << "************ EXAMPLE 3 ************"<<endl;
	CONSOLE("CUTE MESSAGE");
	
}
