#include <bits/stdc++.h>
using namespace std;
int a[5], temp[5];
int main() {
    for (int i=0; i<5; i++) a[i] = i;
    memcpy(temp, a, sizeof(a)); // a -> temp 
    for (int i: temp) cout << i << " "; // 0 1 2 3 4
    cout << "\n";

    // 원본 배열 a를 수정하여 출력하는 로직 
    a[4] = 1000;
    for (int i: a) cout << i << " "; // 0 1 2 3 1000
    cout << "\n";

    // 다시 temp를 기반으로 원본 배열을 담아둠
    memcpy(a, temp, sizeof(a));
    for (int i: a) cout << i << " "; // 0 1 2 3 4 
    cout << "\n";

    return 0;
}