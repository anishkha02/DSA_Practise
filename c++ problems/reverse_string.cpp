#include<bits/stdc++.h>
using namespace std;
string reverseword(string s)
{
  int i=0;
  int j=s.length()-1;
  
  while (i<=j)
  {
    int temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    i++;
    j--;
  }
  return s;
  
}
int main()
{
    string s;
    cin>>s;
    
    cout<<"Before reverse : "<<s<<"\n";
    cout<<"AFter reverse : "<<reverseword(s);
    return 0;
}