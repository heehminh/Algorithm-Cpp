// unique: 범위안에 있는 요소 중 앞에서부터 서로를 비교해가며
// 중복되는 요소를 제거하고 나머지 요소들은 삭제하지 않고 그대로 두는 함수 

#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    for (int i=1; i<=5; i++) {
        v.push_back(i);
        v.push_back(i);
    }

    for (int i:v) cout << i << " "; // 1 1 2 2 3 3 4 4 5 5 
    cout << "\n";
 
    // 중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환한다.
    auto it = unique(v.begin(), v.end());
    cout << it - v.begin() << "\n"; // 5

    // 앞에서부터 중복되지 않게 채운 후 나머지 요소들은 그대로 둔다.
    for (int i:v) cout << i << " "; //  1 2 3 4 5 3 4 4 5 5 (앞에서부터 중복되지 않은걸로 채우고 나머지는 그대로)
    cout << "\n";


    return 0;
}