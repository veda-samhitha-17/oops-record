#include<iostream>
using namespace std;
class book{
    public:
    string title;
    string author;
    float price;
    void display(){
        cout<<"title :"<<title<<endl;
        cout<<"author :"<<author<<endl;
        cout<<"price : rs"<<price<<endl;
    }
};
int main(){
    book b1,b2;
    b1.title="the monk who sold his ferrari";
    b1.author="robin sharma";
    b1.price=314.5;
    b2.title="the alchemist";
    b2.author="paulo coelo";
    b2.price=450.5;
    b1.display();
    b2.display();
    return 0;
}