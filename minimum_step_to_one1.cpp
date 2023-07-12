#include<iostream>      //Memoization method//
using namespace std;
int minstep(int n,int dp[])
{
    if(n==1)
    {
        return 0;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int op1,op2,op3;
    op1=op2=op3=INT8_MAX;
    if(n%3 == 0)
    {
        op1=minstep(n/3,dp)+1;
    }
    if(n%2 == 0)
    {
        op2=minstep(n/2,dp)+1;
    }
    else{
        op3=minstep(n-1,dp)+1;
    }
    int ans=min(min(op1,op2),op3);
    return dp[n]=ans;
}
int main()
{
    int n;
    cin>>n;
    int dp[100]={0};
    cout<<minstep(n,dp)<<endl;
}


// #include<iostream>  //Tabulation method//
// using namespace std;
// int minstepBU(int n)
// {
//     int dp[100]={0};
//     dp[1]=0;
//     for(int i=2;i<=n;i++)
//     {
//         int op1,op2,op3;
//         op1=op2=op3=INT8_MAX;
//         if(i%3==0)
//            {op1=dp[i/3];
//             } if(i%2==0)
//            {op2=dp[i/2];
//            }op3=dp[i-1];
//        dp[i]=min(min(op1,op2),op3)+1;
        
//     }
//     return dp[n];
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int dp[100]={0};
//     cout<<minstepBU(n)<<endl;
// }