#include<iostream>
using namespace std;
class Employee{
    public:
    int empID;
    string name;
    float salary;
    void setEmployee(int id,string n,float s){
        empID=id;
        name=n;
        salary=s;
    }
    void displayEmployee();
};
void Employee :: displayEmployee(){
    cout<<"employee ID :"<<empID<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"salary :"<<salary<<endl;  
}  
    int main(){
        Employee e1,e2;
        e1.setEmployee(3454,"alia",463765.554);
        e2.setEmployee(5464,"chloe",437635.43);
        e1.displayEmployee();
        e2.displayEmployee();
        return 0;
    }
