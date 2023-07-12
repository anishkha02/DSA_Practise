#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int dp[n+1]={0};
    dp[n]=1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=1;j<=a[i]&& i+j<n+1;j++)
        {
            dp[i]+=dp[i+j];
        }
    }
    cout<<dp[0]<<endl;
}