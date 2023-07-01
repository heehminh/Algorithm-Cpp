// unique 를 쓸 경우 sort, erase(unique()) 와 함께 쓰는 것이 좋다

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); // 동기화 비활성화 
    cin.tie(NULL);                    
    cout.tie(NULL);

    vector<int> s { 4, 3, 3, 5, 1, 2, 3}; // s에서 중복제거

    s.erase(unique(s.begin(), s.end()), s.end());
    for (int i:s) cout << i << " "; // 4 3 5 1 2 3 
    cout << "\n";

    vector<int> s2 = { 4, 3, 3, 5, 1, 2, 3};

    sort(s2.begin(), s2.end()); // 1 2 3 3 3 4 5 
    s2.erase(unique(s2.begin(), s2.end()), s2.end());
    for (int i:s2) cout << i << " "; // 1 2 3 4 5 
    cout << "\n";

    return 0;
}