#include<iostream>
using namespace std;

int merge(int arr[],int p,int q, int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int *left=(int*)malloc (sizeof(int)*(n1+1));
    int *right=(int*)malloc (sizeof(int)*(n2+1));
    left[n1]=INT8_MAX;
    right[n2]=INT8_MAX;
    for(i=p;i<=q;i++)
    {
        left[i-p]=arr[i];
    }
    for(j=q+1;j<=r;j++)
    {
        right[j-q-1]=arr[j];
    }
    i=0;
    j=0;
    for(k=p;k<=r;k++)
    {
        if(left[i]<right[j])
        {
            arr[k]=left[i++];
        }
        else{
            arr[k]=right[j++];
        }
    }
}


int mergeSort(int arr[],int p,int r)
{ 
    if(p<r){
    int q=(p+r)/2;
    mergeSort(arr,p,q);
    mergeSort(arr,q+1,r);
    merge(arr,p,q,r);
    }
}

int main()
{
   //int arr[10]={-3,2,3,4,7,1,2,3,5,7};
   int arr[10]={4,3,2,6,7,43,5,1,0,8};
  // merge(arr,0,4,9);
   mergeSort(arr,0,9);
   int i;
   for(i=0;i<10;i++){
    cout<<arr[i]<<" ";

   }

}