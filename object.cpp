#include<iostream>
using namespace std;
class time{
    public:
    int hrs;
    int mins;
    void getting (int h,int m)
    {
        hrs = h;
        mins = m;
    }
    void puttime()
    {
        cout<<hrs<<"hours"<<endl;
        cout<<mins<<"minutes"<<endl;   
    }
        void sum(time t1,time t2);
    };
    void time :: sum(time t1,time t2)
    {
        mins = t1.mins+t2.mins;
        hrs = t1.hrs+t2.hrs+(mins/60);
        mins = mins%60;
    };
        
    int main()
    {
        class time t1,t2,t3;
        t1.getting(2,45);
        t2.getting(3,30);
        t3.sum(t1,t2);
        t1.puttime();
        t2.puttime();
        t3.puttime();
        return 0;
    }
    
