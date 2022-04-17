https://www.codechef.com/problems/WORDLE
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        string s3;
        cin>>s1>>s2;
        for (int i = 0; i < s1.length(); i++)
        {
            if(s1.at(i)==s2.at(i))
            s1[i]='G';
            else
            s1.at(i)='B';
        }
        cout<<s1<<endl;
        
    }
    return 0;
}
