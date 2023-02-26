#include<iostream>
#include<conio.h>
using namespace std;
class tollbooth{
	private:
		double money;
		unsigned int cars;
	public:
		tollbooth(){
		    money=0.0;
		    cars=0;
		}
		tollbooth(int cars1, double money1){
		    money=money1;
		    cars=cars1;
		}
		const payingcar(){
		    money+=0.5;
		    cars++;
		}
		const nopaycar(){
		    cars++;
		}
		display(){
		    cout<<"Total Cars:"<<cars<<"\nTotal money:"<<money<<endl;

		}
};

int main(){
    tollbooth obj1;
    char input;
    int number;
    cout<<"press C for paying car and N for nonpaying car."<<endl;
    cin>>input;
    while(input!=27)
    {

       cout<<"press C for paying car and N for nonpaying car."<<endl;

        if(input=='c' || input == 'C')
            obj1.payingcar();
        else if(input=='n' || input == 'N')
            obj1.nopaycar();

        input=getch();

    }

	obj1.display();
}


