#include<iostream>
using namespace std;
class box{
    private:
    static int length;
    static int breadth;
    static int height;
    public:
    static void print()
    {
        cout<<"the value of the length is :"<<length<<endl;
        cout<<"the value of the breadth is :"<<breadth<<endl;
        cout<<"the value of the height is :"<<height<<endl;

    }
};
int box :: length = 10;
int box :: breadth = 20;
int box :: height = 30;
int main(){
    box b;
    cout<<"static member function is called through object name:\n"<<endl;
    b.print();
    cout<<"\n static member funtion is called through class name :\n"<<endl;
    box :: print();
    return 0;
}