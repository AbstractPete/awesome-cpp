/*bubble sort*/

#include <iostream>
using namespace std;

void sort(int array[]){
	auto length = sizeof(array) + 1;
	for(int i = 0; i < length-1; i++){
		for(int j = i+1; j < length; j++){
			if(array[j] < array[i]){
					int temp = array[j];
					array[j] = array[i];
					array[i] = temp; 
			}
		
		}
	}
}

void print(int array[]){
	//auto length = sizeof(array);
	auto length = sizeof(array);
	//cout << length << endl;
	for(int i = 0; i <= length;i++){
		cout << "["<< array[i] << "]";
		if(i != length) cout << ", ";
	}		
	cout << endl; 
}


int main(){
	int a[] = {1,4,5,4,3,2,184,28,-29};
	print(a);
	sort(a);
	print(a);	
	return 0;
}


