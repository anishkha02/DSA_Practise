#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    else 
    return factorial(n*(n-1));
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}