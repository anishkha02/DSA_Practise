#include<iostream>
using namespace std;

int findSum(string str)
{
int sum = 0;
for (char ch : str)
{
if (isdigit(ch))
{
sum += ch - '0';
}
}
return sum;
}
int main()
{
string str;
cin>>str;
cout << "Sum :" << findSum(str) << endl;
}