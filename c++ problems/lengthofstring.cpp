#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; int count=0;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<count;
    return 0;
}