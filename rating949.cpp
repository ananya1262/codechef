#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(s.at(i)=='5' || s.at(i)=='0')
             count=count+1;
        }
        if(count>=1)
         cout<<"YES"<<endl;
        else 
         cout<<"NO"<<endl;
        
    }
    
    return 0;
}
