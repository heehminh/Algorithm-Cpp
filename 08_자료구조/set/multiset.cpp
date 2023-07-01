#include <bits/stdc++.h>
using namespace std;
multiset<int> s;

int main() {
    for (int i=5; i>=1; i--) {
        s.insert(i);
        s.insert(i);
    }

    for (int it:s) cout << it << " "; // 1 1 2 2 3 3 4 4 5 5
    cout << "\n";
    
    return 0;
}