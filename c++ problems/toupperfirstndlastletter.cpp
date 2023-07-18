// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // string str;
//     // cin>>str;
//     // for(int i=0;i<str.length();i++){
//     //     if(i==0 || i==str.length()-1) str[i]=toupper(str[i]);
//     //     else if(str[i]==' '){
//     //             str[i-1]==toupper(str[i-1]);
//     //             str[i+1]==toupper(str[i+1]);}
                
//     // }
//     // cout <<str;
//     // return 0;

//     char str[100];
//     cin>>str;
//     int n=strlen(str);
//     for(int i=0;i<n;i++){
//         if(i==0||i==n-1){
//             str[i]=toupper(str[i]);
//         }
//         else if(str[i]==' '){
//             str[i-1]==toupper(str[i-1]);
//             str[i+1]==toupper(str[i+1]);
//         }
//     }
//     cout<<str;
//     return 0;
// }


#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{

//Initializing variables.
char str[100]="anishkha chaudhary";
int length = 0;
//Calculating length.
length = strlen(str);

for(int i=0;i<length;i++)
{
if(i==0||i==(length-1)) //Converting character at first and last index to uppercase.
{
str[i]=toupper(str[i]);
}
else if(str[i]==' ')//Converting characters present before and after space to uppercase.
{
str[i-1]=toupper(str[i-1]);
str[i+1]=toupper(str[i+1]);
}
}

cout<<str;
return 0;
}