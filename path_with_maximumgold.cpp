#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int dp[n][m]={0};
    for(int j=m-1;j>=0;j--)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(j==m-1)
            {
                dp[i][j]=a[i][j];
            }
            else if(i==0)
            {
                dp[i][j]=a[i][j]+dp[i][j+1];
            }
            else if(i==n-1)
            {
                dp[i][j]=a[i][j]+max(dp[i][j+1],dp[i-1][j+1]);
            }
            else{
                dp[i][j]=a[i][j]+max(dp[i][j+1],max(dp[i-1][j+1],dp[i+1][j+1]));
            }
        }
    }
    int maxi=dp[0][0];
    for(int i=1;i<n;i++)
    {
        if(dp[i][0]>maxi)
        {
            maxi=dp[i][0];
        }
    }
    cout<<maxi<<endl;
}
