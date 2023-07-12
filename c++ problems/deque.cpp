#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq={10,20,30,50,60};
    auto i=dq.begin();
    i++;
    dq.insert(i,55);
    dq.pop_front();    
    dq.pop_back();  
    cout<<dq.size();  

    return 0;

}