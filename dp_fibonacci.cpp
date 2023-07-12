#include<bits/stdc++.h>

using namespace std;
vector<long long>printfib(int n)
{
   vector <long long> v(n,0);
    v[0]=1;
    v[1]=1;
    for(int i=2;i<n;i++)
    {
        v[i]=v[i-1]+v[i-2];
    }
    return v;   
}

int main()
{
  int n;
  cin>>n;
  vector<long long>ans=printfib(n);
  for(long long i:ans)
  cout<<i<<" ";
  cout<<endl;
  return 0;

}