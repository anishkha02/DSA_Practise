#include<iostream>
using namespace std;
void floodfill(int a[], int sr,int sc,string bsf,bool visited[])

{
   
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    bool visited[n][m];
    floodfill(a,0,0," ",visited);


}