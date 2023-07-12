#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
 int checkcompressed(string S, string T){

int i=0,k=0,n=S.size();
        while(i<n)
        {
            int j=i;
            while(j<n && S[j]==S[i])
            {
                j++;
            }
            S[k++]=S[i];
            if(j-i>1)
            {
                for(char c: to_string(j-i))
                {
                    S[k++]=c;
                }
            }
            i=j;
        }
        return k;

}
};       

int main()
{
    string S,T;
    cin>>S>>T;
    Solution ob;
    cout<<ob.checkcompressed(S,T)<<endl;

return 0;
}