https://www.codechef.com/problems/DRUNKALK
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a;
    cin>>a;
    int arr[a] {0};
    int j=0;
    for (int i = 1; i <=a; i++)
    {
        if(a%i==0)
        {
            arr[j]=i;
            j++;
        }
    }

    int arr1[j];
    int k=0;
    for (int i = 0; i < j; i++)
    {
        if(arr[i]<=10)
        {
          arr1[k]=arr[i];
          k++;
        }

    }

    cout<<arr1[k-1];
    
    
    
    return 0;
}
