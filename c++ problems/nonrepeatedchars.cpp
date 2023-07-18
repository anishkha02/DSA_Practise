#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string x ; cin>>x;
    int n = x.length();
    unordered_map<char, int> map;

    for (int i = 0; i < n; ++i) {
        if (map.find(x[i]) == map.end()) {
            map[x[i]] = 1;
        } else {
            int oldval = map[x[i]];
            int newval = oldval + 1;
            map[x[i]] = newval;
        }
    }

    for (const auto& data : map) {
        if (data.second == 1) {
            cout << data.first << endl;
        }
    }

    return 0;
}
