#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dp0[n+1],dp1[n+1],i;
    dp0[1]=1;
    dp1[1]=1;
    for(i=2;i<=n;i++)
    {
        dp0[i]=dp1[i-1];
        dp1[i]=dp0[i-1]+dp1[i-1];

    }
    cout<<dp0[n]+dp1[n];
}