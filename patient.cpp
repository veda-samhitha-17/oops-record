#include<iostream>
using namespace std;
class patient{
    public:
    int patientID;
    string name;
    string disease;
    void setpatient(int id,string n,string d){
        patientID=id;
        name=n;
        disease=d;
    }
    void displaypatient();
};
void patient :: displaypatient(){
    cout<<"patient ID :"<<patientID<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"disease :"<<disease<<endl;
}
int main(){
    patient p1,p2;
    p1.setpatient(34,"anna","pneumonia");
    p2.setpatient(43,"elsa","anemia");
    p1.displaypatient();
    p2.displaypatient();
    return 0;
}

