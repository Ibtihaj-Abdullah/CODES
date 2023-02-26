#include <iostream>
#include <string>
using namespace std;
class patient{
private:
    string name;
    long num;
public:
    patient(){
    }
    void getdata(){
        cout<<"Enter patient name: ";
        cin>>name;
        //cin.ignore();
        cout<<"Enter patient number: ";
        cin>>num;
    }
    void putdata(){
        cout<<"Patient number: "<<num<<endl;
        cout<<"Patient name: "<<name<<endl;
        cout<<endl;
    }
};
main(){
    patient p[30];
    for(int i=0;i<30;i++){
        p[i].getdata();
    }
    cout<<endl;
    for(int i=0;i<30;i++){
        p[i].putdata();
    }
    return 0;
}
