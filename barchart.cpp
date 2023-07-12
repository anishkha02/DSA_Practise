// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//         cin>>a[i];
//     int max=a[0];
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]>max)
//         max=a[i];
//     }
//     for(int i=max;i>=1;i--)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i>a[j])
//             cout<<"\t";
//             else
//             cout<<"#\t";
//         }
//         cout<<"\n";
//     }
// }


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m,carry=0;
    cin>>n>>m;
    int k=max(n,m);
    int a[n],b[m],ans[k];
    for(int i=0;i<n;i++)
       cin>>a[i];
    for(int i=0;i<m;i++)
       cin>>b[i];
    int i=n-1,j=m-1;
    k=n-1;
    while(k>=0)
    {
        int sum=0;
        if(i>=0)
        {
            sum=sum+a[i];

        }
        if(j>=0)
        {
            sum=sum+a[j];
        }
        sum=sum+carry;
        int rem=sum%10;
        int quo=sum/10;
        ans[k]=rem;
        i--;
        j--;
        k--;

    }
}
