#include<iostream>
using namespace std;
int isPalindrome(string s){
  int n=s.length();
  int start=0;
  int end=n-1;
  while(start<end){
    if(s[start]!=s[end]) return 0;
    start++;
    end;
  }
  return 1;
}
int main(){
    string s;
    cin>>s;
    return isPalindrome(s);
}
