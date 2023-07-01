#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int v[3] = {1, 2, 3};
    int ret[3];
    memcpy(ret, v, sizeof(v)); // v라는 Array를 ret에 깊은복사 
    cout << ret[1] << "\n"; // 2 
    ret[1] = 100;
    cout << ret[1] << "\n"; // 100
    cout << v[1] << "\n"; // 2 

    return 0;
}