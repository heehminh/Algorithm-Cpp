// memcpy: array 깊은 복사
// copy: array, vector 깊은 복사 

#include <bits/stdc++.h>
using namespace std;

// int n = 3;

int main(void) {
    vector<int> v {1, 2, 3};
    vector<int> ret(3);
    copy(v.begin(), v.end(), ret.begin()); // v->ret 복사 
    cout << ret[1] << "\n"; // 2 
    ret[1] = 100; 
    cout << ret[1] << "\n"; // 100 
    cout << v[1] << "\n"; // 2

    // int v2[n] = { 1, 2, 3};
    // int ret2[n];
    // copy(v2, v2+n, ret2); 
    // cout << ret2[1] << "\n"; // 2 
    // ret2[1] = 100; 
    // cout << ret2[1] << "\n"; // 100 
    // cout << v2[1] << "\n"; // 2

    return 0;
}
