#include<iostream>
using namespace std;
int countdig(int n)
{   static int count=0;
    if(n>0)
    {  
         count++;
         countdig(n/10);
       
    }
    else{
    return count;
        }
}

// int countdigit(int n){
//     int count=0;
//     while(n!=0)
//     {
//         n=n/10;
//         ++count;
//     }
//     return count;
// }
int main()
{
   int n;
   int count=0;
   cout<<"Enter the number :";
   cin>>n;
   count=countdig(n);
   cout<<count;
   return 0;

}


