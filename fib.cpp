#include<iostream>
using namespace std;
long long int fibSum(long long int N){
         long long int mod=1000000007;
        long long int fibno[N+1];
       fibno[0]=0,fibno[1]=1;
        if(N<=0)
        {
            return N;
        }
        
        long long int sum=fibno[0]+fibno[1];
        for(int i=2;i<=N;i++)
        {
            fibno[i]=fibno[i-1]+fibno[i-2];
            sum=sum+fibno[i];
        }
        return sum%mod;
    }
int main()
{
    long long int n;
    cin>>n;
    cout<<fibSum(n);
    return 0;
}


// int fibonacci(int n){
//     if(n==0 || n==1)
//        return n;
//     return fibonacci(n-1)+fibonacci(n-2);

// }
// int main()
// {
//    int n;
//    cin>>n;
//    cout<<fibonacci(n);
   
// }