#include<bits/stdc++.h>
using namespace std;
int stairpathcount(int n, int qb[])  
{
    if(n==0)
        return 1;
    
    if(n<0)
        return 0;
    if(qb[n]>0)
        return qb[n];
    
    int nm1=stairpathcount(n-1,qb);
    int nm2=stairpathcount(n-2,qb);
    //int nm3=stairpathcount(n-3,qb);
    //int cp=nm1+nm2+nm3;
    int cp=nm1+nm2;

    qb[n]=cp;
    return cp;
}

int main()
{
    int n;
    cin>>n;
    int qb[1000]={0};
    int cp=stairpathcount(n,qb);
    cout<<cp<<endl;
    return 0;
}