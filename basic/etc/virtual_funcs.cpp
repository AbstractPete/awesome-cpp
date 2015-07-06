#include <iostream>

using namespace std;

class Harvester{
	protected: const int CAPACITY = 10;
	protected: int bagSize = 0;
	
	public:
		
		virtual void harvest(){
			cout << "Harvester::harvest \t-\t";
			cout << "harvest 1 item" << endl;
			bagSize++; 
		}
		void isBagFull(){
			cout << "Harvester::isBagFull \t-\t";
			if(bagSize >= CAPACITY)
				cout << "Bag is full of items\n";			
			else
				cout << "Bag isnt full of items\n";
		}
};

class FlaxHarvester : public Harvester{
	public:
		
		virtual void harvest(){
			cout << "FlaxHarvester::harvest()\t-\t";
			cout << "harvest 1 flax" << endl;
			bagSize++; 
		}
		void isBagFull(){
			cout << "FlaxHarvester::isBagFull()\t-\t";
			if(bagSize >= CAPACITY)
				cout << "Bag is full of flax\n";			
			else
				cout << "Bag isnt full of flax\n";
		}
			
};




int main(){
	FlaxHarvester* flaxHarvester = new FlaxHarvester();
	Harvester* harverster = flaxHarvester;
	
	flaxHarvester->harvest();
	flaxHarvester->isBagFull();
	
	harverster->harvest();/*called FlaxHarvester::harvest()*/
	harverster->isBagFull();
	
	
	
	return 0;
}
