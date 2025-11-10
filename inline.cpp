#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;
}
int main(){
    int num = 6;
    int res = square(num);
    cout<<res;
    return 0;
}