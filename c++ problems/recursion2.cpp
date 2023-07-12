#include<iostream>         //count function using recursion.....
int c=0;
using namespace std;
void count(int n){
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