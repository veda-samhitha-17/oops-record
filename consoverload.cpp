#include<iostream>
using namespace std;
class person{
    private:
    int age;
    public:
    person(){
        age = 21;
    }
    person(int a){
        age = a;
    }
    int getAge(){
        return age;
    }
};
int main(){
    person person1,person2(25);
    cout<<"person1 age is :"<<person1.getAge()<<endl;
    cout<<"person2 age is :"<<person2.getAge()<<endl;
    return 0;
}