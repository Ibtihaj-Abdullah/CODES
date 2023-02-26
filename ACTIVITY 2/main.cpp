#include <iostream>
using namespace std;
class Fraction{
private:
    int num;
    int denum;
public:
    Fraction(){
        num=0;
        denum=0;
    }
    void input(){
        char x;
        cin>>num>>x>>denum;
    }
    void sum(Fraction f){
        Fraction temp;
        int s1=0,s2=0;
        temp.num=(num*f.denum)+(denum*f.num);
        temp.denum=denum*f.denum;
        temp.display();
    }
    void display(){
        cout<<"Sum = "<<num<<"/"<<denum<<endl;
    }
};
int main()
{
    Fraction f1;
    Fraction f2;
    char x='y';
    while(x='y'){
        cout<<"Enter first fraction: ";
        f1.input();
        cout<<"Enter second fraction: ";
        f2.input();
        f1.sum(f2);
        cout<<"Press y to continue."<<endl;
        cin>>x;
        if(x!='y'){
            break;
        }
    }
    return 0;
}
