https://www.codechef.com/problems/ECOCLASS
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int aa ;
            cin>>aa;
            v1.push_back(aa);
        }
        for (int i = 0; i < n; i++)
        {
            int aa;
            cin>>aa;
            v2.push_back(aa);
        }

        int count=0;
        for (int i = 0; i < n; i++)
        {
           if(v1.at(i)==v2.at(i))
           {
            count++;
           }
        }

        cout<<count<<endl; 
    }
    return 0;
}
