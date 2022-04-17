https://www.codechef.com/problems/MATCHES
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
        int sum=a+b;
        string s=to_string(sum);
        int count=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i)=='1')
             count=count+2;
            else if(s.at(i)=='2')
             count=count+5;
            else if(s.at(i)=='3')
             count=count+5;
            else if(s.at(i)=='4')
             count=count+4;
            else if(s.at(i)=='5')
             count=count+5;
            else if(s.at(i)=='6')
             count=count+6;
            else if(s.at(i)=='7')
             count=count+3;
            else if(s.at(i)=='8')
             count=count+7;
            else if(s.at(i)=='9')
             count=count+6;
            else if(s.at(i)=='0')
             count=count+6;   
        }
        cout<<count<<endl;
        
        }
    
    return 0;
}
