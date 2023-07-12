// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     if(n==0)
//      return;
//     print(n-1);
//     cout<<n;

// }
// int main()
// {
//     int n;
//     cin>>n;
//     print(n);
// }

// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//     if(n==0)
//     {
//         return 1;

//     }
//     int fact=factorial(n-1);
//     int ans=fact*n;
//     return ans;
// }
// int main()
// {
//     int n, ans;
//     cin>>n;
//     ans=factorial(n);
//     cout<<ans;

// }

// #include<iostream>
// using namespace std;
// int sum(int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }
//     int nm1=sum(n-1);
//     int ans=n+nm1;
//     return ans;

// }
// int main()
// {
//     int n,ans;
//     cin>>n;
//     ans=sum(n);
//     cout<<ans;
// }

// #include<iostream>
// using namespace std;
// int power(int n,int m)
// {
//     if(m==0)
//     {
//         return 1;
//     }
//     int xpn1=power(n,m-1);
//     int ans=xpn1*n;
//     return ans;
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int ans=power(n,m);
//     cout<<ans;
// }

// #include<iostream>
// using namespace std;
// int firstatindex(int a[],int i,int key)
// {
//     if(i==5)
//       { return -1;}
//     if(a[i]==key)
//        {return i;}
//     else {
//         int fiisa=firstatindex(a,i+1,key);
//         return fiisa;
//     }
// }
// int main()
// {
//     int a[5]={1,3,4,2,1};
//     int key=2;
//     int fi=firstatindex(a,0,2);
//     cout<<fi;
// }

// #include <iostream>
// using namespace std;
// int lastatindex(int a[], int i, int key)
// {
//     if (i == 4)
//        {  return -1;}
//     int li = lastatindex(a, i + 1, key);
//     if (li != -1)
//         {return li;}
//     else if (a[i] == key)
//         {return i;}
//     else
//         {return -1;}
// }
// int main()
// {
//     int a[4] = {1, 2, 4, 2};
//     int key = 2;
//     int lia = lastatindex(a, 0, 2);
//     cout << lia;
// }


#include<iostream>
int c=0;
using namespace std;
int count(int n){
    if(n==0)
      return;
    c++;
    count(n/10);
}
int main()
{
    int n;
    cin>>n;
    count(n);
    cout<<c;
}