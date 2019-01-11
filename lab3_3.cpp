#include<iostream>
using namespace std;
int main()
{
    double x=6;
    double y=19;
    double ans = 0;

    while(x<=y){
        ans=ans+(1/x);
        x=x+1;
           
    }
    
    cout << ans;
    return 0;
}
