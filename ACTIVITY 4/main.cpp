 #include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;
class employee{
public:
    char* name;
    char* dep;
    double salary;
    double years;
    employee();
    employee(char* , char* , double , double );
    employee(const employee &e);
    void input();
    void show();
    ~employee(){
        delete name;
        delete dep;
    }
};
employee::employee(){
    name = new char[10];
    strcpy(name, "UNKNOWN");
    dep = new char[10];
    strcpy(dep, "UNKNOWN");
    salary=0;
    years=0;
}
employee::employee(char* n, char* d, double s, double y){
    int len1 = strlen(n);
    name = new char[len1+1];
    strcpy(name,n);
    int len2 = strlen(d);
    dep = new char[len2+1];
    strcpy(dep,d);
    salary=s;
    years=y;
}
employee::employee(const employee &e){
        int len1 = strlen(e.name);
        name = new char[len1+1];
        strcpy(name,e.name);
        int len2 = strlen(e.dep);
        dep = new char[len2+1];
        strcpy(dep,e.dep);
        salary = e.salary;
        years = e.years;
    }
void employee::input(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter department: ";
    cin>>dep;
    cout<<"Enter salary: ";
    cin>>salary;
    cout<<"Enter years of service: ";
    cin>>years;
    }
void employee::show(){
        cout<<"The name of the employee is "<<name<<endl;
        cout<<"The department of the employee is "<<dep<<endl;
        cout<<"The salary of the employee is "<<salary<<endl;
        cout<<"The service years of the employee is "<<years<<endl;
    }
int main(){
    employee e1;
    employee e2("Ebtihaj","DCSE",1000,1);
    employee e3;
    e1.show();
    cout<<endl;
    e2.show();
    cout<<endl;
    e3.input();
    e3.show();
    return 0;
}
