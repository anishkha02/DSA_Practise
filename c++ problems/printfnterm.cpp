#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, product, result = 0;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        product = 1;
        for (int j = 0; j < i; j++)
        {
            if (i == 1)
                product = 1;
            else
            {
                product = product * k;
            }
            k++;
        }
        result = result + product;
    }
    cout << result;
    return 0;
}