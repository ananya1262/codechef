https://www.codechef.com/problems/TRANSFORM
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        if(a%3==0)
        {
            cout<<"NORMAL"<<endl;
        }
        else if(a%3==1)
        {
            cout<<"HUGE"<<endl;
        }
        else
        {
            cout<<"SMALL"<<endl;
        }
    }
    
    return 0;
}
