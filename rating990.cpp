#include<iostream>
using namespace std;
int main(){
    int t; 
    cin>>t;
    for(int i=0; i<t; i++){
        int n, a, b;
        cin>>n>>a>>b;
        int x[n], c=0, d=0;
        for(int j=0; j<n; j++){
            cin>>x[j];
            if(a==x[j]){
                c++;
            }
            if(b==x[j]){
                d++;
            }
        } 
        double p = (c*d*1.0)/(n*n*1.0);
        cout<<p<<endl;       
    }
    return 0;
}
