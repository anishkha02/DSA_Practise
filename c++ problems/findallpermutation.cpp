#include <bits/stdc++.h>
using namespace std;
void findPermutations(string str) {
    // Sort the input string in lexicographically sorted order
    sort(str.begin(), str.end());

    // Output the first permutation
    cout << str << endl;

    // Loop through the rest of the permutations using std::next_permutation
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
