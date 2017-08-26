#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int print(vector<int> array){
	for(int i = 0; i < array.size(); i++){
		cout << "i(" << i << ") = " << array[i] << endl;
	}
}
void compare(vector<int> array0, vector<int> array1){
	if(array0 == array1){
		cout << "arrays are equal\n";
	}else{
		cout << "arrays arent equal\n";
	}
}

int main(){
	vector<int> array(10); // init array with value 0w 

	for(int i = 0; i < array.size(); i++){
		array[i] = i;
	}
	print(array);
	cout << "next: copy array\n";
	vector<int> array_copy(array);
	print(array_copy);
	cout << "next: let's compare this arrays\n";
	compare(array,array_copy);
	cout << "so, i'll change element with index a[7]" << endl;
	array[7] = 10;
	compare(array,array_copy);
	cout << "let's quickly looking  vector methods\n";
	cout << "begin/end and crazy iterator\n";
	// frankly, it's too much typings:D
	for(vector<int>::iterator it = array.begin(); it != array.end(); ++it){
		cout << ' ' << *it << endl;
	}	
	return 0;
}
