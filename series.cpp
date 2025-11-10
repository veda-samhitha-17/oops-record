#include<iostream>
using namespace std;
class series{
    public:
    string title;
    string ott;
    int ep;
    void setseries(string t,string o,int n){
        title=t;
        ott=o;
        ep=n;
    }
    void displayseries();
};
void series :: displayseries(){
    cout<<"title of the series :"<<title<<endl;
    cout<<"ott paltform :"<<ott<<endl;
    cout<<"number of episodes :"<<ep<<endl;
}
int main(){
    series s1,s2;
    s1.setseries("wednesday","netflix",8);
    s2.setseries("head over heels","amazon prime",12);
    s1.displayseries();
    s2.displayseries();
}