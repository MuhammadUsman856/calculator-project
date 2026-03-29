#include <iostream>
using namespace std;
class calculator{
	private:
		double a, b;
	public:
		calculator(){
			a = 0;
			b = 0;
		}
		
		void input(){
			cout<<"Enter First Number : ";
			cin>>a;
			cout<<"Enter Second Number : ";
			cin>>b;
			
		}
		
		double add(){
			return a + b;
		}
		double subtract(){
			return a - b;
		}
		double multiply(){
			return a * b;
		}
		double divide(){
			return a / b;
		}
		
};


int main(){
	
	calculator c1;
	int choice;
	do{
		cout<<"---------Calculator Menu---------"<<endl;
		cout<<"1. Addition "<<endl;
		cout<<"2. Subtraction "<<endl;
		cout<<"3. Multiplication "<<endl;
		cout<<"4. Division "<<endl;
		cout<<"5. Exit "<<endl;
		cout<<"Enter Your Choice : ";
		cin>>choice;
		
		switch(choice){
			case 1:
				c1.input();
				cout<<"Result is : "<<c1.add()<<endl;
				break;
			case 2:
				c1.input();
				cout<<"Result is : "<<c1.subtract()<<endl;
				break;
			case 3:
				c1.input();
				cout<<"Result is : "<<c1.multiply()<<endl;
				break;
			case 4:
				c1.input();
				cout<<"Result is : "<<c1.divide()<<endl;
				break;
			case 5:
				cout<<"Exiting program...";
				 break;
				 
			default:
				cout<<"\n\nInvalid Operator ...";	 	
		} 
		
	} while(choice != 5); 		
		
		
		
	
	
	return 0;
}
