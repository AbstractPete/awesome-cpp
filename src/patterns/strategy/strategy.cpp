#include <iostream>

struct Formation{
	virtual void arrange() = 0;
	virtual ~Formation(){}
};

/*
Square
Wedge
*/
struct SquareFormation: Formation{
	void arrange(){
		std::cout << "Square formation!\n";
	}
};

struct WedgeFormation: Formation{
	void arrange(){
		std::cout << "Wedge formation!\n";
	}
};
  
class Commander{
	private:
		 Formation *formation;
	
	public:
		Commander(Formation *f):formation(f){
			
		}
		void command(){
			formation->arrange();
		}
		
		~Commander(){
			delete formation;
		}
}; 


// or

template<class CommandPolicy>
class SmartCommander{
	private:
		CommandPolicy strategy;
	public: 
		void arrange(){
			strategy.arrange();
		}
};



int main(){
	std::cout << "Commander" << std::endl; 
	Commander toSquareFormation(new SquareFormation);
	toSquareFormation.command();
	
	Commander toWedgeFormation(new WedgeFormation);
	toWedgeFormation.command();
	
	std::cout << "or\n";
	std::cout << "Smart Commander" << std::endl;
	SmartCommander<SquareFormation> square;
    SmartCommander<WedgeFormation> wedge;
	
	square.arrange();
	wedge.arrange();
	
	
	return 0;
} 
