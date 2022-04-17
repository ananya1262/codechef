// codechef
//here u will get the solution of some practice problems of codechef
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(b==0)
        {
            cout<<a<<endl;
        }
        else if(a==b)
        {
            cout<<a+b-1<<endl;
        }
        else
        {
            cout<<a+b<<endl;
        }
    }
    
    return 0;
}
