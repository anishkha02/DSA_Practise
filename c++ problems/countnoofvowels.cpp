#include<iostream>
using namespace std;
int main(){
int count=0;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    if((s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u') ||(s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'))
     count++;
}
cout<<count;
    
} 