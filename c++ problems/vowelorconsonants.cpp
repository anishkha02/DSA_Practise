#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    char islowercase={c=='a'||c=='e'||c=='i'||c=='o'||c=='u'};
    char isuppercase={c=='A'||c=='E'||c=='I'||c=='O'||c=='U'};
    if(islowercase || isuppercase) cout<<"Vowel hai"<<endl;
    else cout<<"Consonant hai";
    return 0;
}