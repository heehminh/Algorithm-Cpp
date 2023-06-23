#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int a = *max_element(v.begin(), v.end());
    auto b = max_element(v.begin(), v.end());
    cout << a << "\n"; // 10 
    cout << (int)(b-v.begin()) << "\n"; // 9 (9번째)

    int c = *min_element(v.begin(), v.end());
    auto d = min_element(v.begin(), v.end());
    cout << c << "\n"; // 1
    cout << (int)(d-v.begin()) << "\n"; // 0 (0번째)
    
    return 0;
}