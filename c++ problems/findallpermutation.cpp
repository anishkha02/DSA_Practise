#include <bits/stdc++.h>
using namespace std;
void findPermutations(string str) {
    sort(str.begin(), str.end());
    cout << str << endl;
    while (next_permutation(str.begin(), str.end())) {
        cout << str << endl;
    }
}
int main() {
    string input;
    cin >> input;
    findPermutations(input);
    return 0;
}
