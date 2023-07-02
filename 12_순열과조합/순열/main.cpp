// next_permutation: 오름차순
// prev_permutation: 내림차순

#include <bits/stdc++.h>
using namespace std;
vector<int> a = {1, 3, 2};

void printV(vector<int> &v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    // 오름차순으로 정렬
    sort(a.begin(), a.end());

    vector<int> v;
    for (int i=0; i<3; i++) {
        v.push_back(a[i]);
    }

    do {
        printV(v);
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}