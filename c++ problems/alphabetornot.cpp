#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if((c>='a' && c<='z')|| (c>='A'&&c<='Z'))
         cout<<"is alphabet"<<endl;
    else cout <<"Not alphabet";
    return 0;
}