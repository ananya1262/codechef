https://www.codechef.com/problems/PRICECON
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum=sum+arr[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>k)
             arr[i]=k;
        }
         
        int sum1=0;
        for (int i = 0; i < n; i++)
        {
            sum1=sum1+arr[i];
        } 

        cout<<sum-sum1<<endl;

        

        
    }
    
    return 0;
}
