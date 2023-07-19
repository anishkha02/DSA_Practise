#include<iostream>
using namespace std;
string removeDuplicatesRecursive(string s, int index = 0) {
    if (index >= s.length()) {
        return s;
    }
    if (s[index] == s[index - 1]) {
        s.erase(index, 1);
        return removeDuplicatesRecursive(s, index);
    }
    return removeDuplicatesRecursive(s, index + 1);
}
int main() {
    string input ; cin>>input;
    string result = removeDuplicatesRecursive(input);
    cout << "Result: " << result << endl;
    return 0;
}