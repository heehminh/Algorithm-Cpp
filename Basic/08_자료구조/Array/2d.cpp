// 2차원배열과 탐색
#include <bits/stdc++.h>
using namespace std;

const int mxy = 3; 
const int mxx = 4; 

int a[mxy][mxx];
int main() {
    // bad 
    for (int i=0; i<mxy; i++) {
        for (int j=0; j<mxx; j++) {
            a[i][j] = (i+j);
        }
    }

    // good => C++에서 캐시를 첫번째 차원(y)를 기준으로 하기 때문에 더 성능이 좋음
    for (int i=0; i<mxx; i++) {
        for (int j=0; j<mxy; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}