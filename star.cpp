#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int st=1,sp=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<sp;j++)
            cout<<" ";
        for(int j=0;j<st;j++)
            cout<<"#";
        cout<<endl;
        if(i<=n)
        {
            st=st+2;
            sp=sp-1;
        }
    }
    return 0;

}