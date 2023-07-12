#include<iostream>
#include<vector>
using namespace std;
vector<int> getSmaller(int arr[],int n,int k)
{
    vector<int> res;
    for(int i=0;i<n;i++)
     if(arr[i]<k)
      res.push_back(arr[i]);
 return res;
}

int main(){
    int arr[]={10,20,5,54,15};
    vector<int> res=getSmaller(arr,5,25);
    for(int x: res)
    cout<<x<<" ";
    return 0;
}










// int fun(int arr[],int n,int k)
// {
//     int i;
//   if(arr[i]<k)
//   {
//     cout<<arr[i]<<" ";
//     i++;
//   }
//   return arr[i];

// }
// int main()
// {
//    int arr[50];
//     int n, k;
//     cout<<"Enter the values of n and k: ";
//   cin>>n >>k;
//   cout<<"Enter the elements of the array: ";
//    for(int i=1;i<=n;i++)
//    {
//     cin>>arr[i];
//    }
//   fun(arr,n,k);
//   return 0;

// }