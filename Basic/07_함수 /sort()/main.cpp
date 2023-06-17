#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<pair<int, int>> v; 

bool cmp(pair<int, int> x, pair<int, int> y) {
    return x.first > y.first;
}

int b[5];
int main(){
    for (int i=5; i>=1; i--) b[i-1] = i;
    for (int i=5; i>=1; i--) a.push_back(i);

    // 오름치순
    sort(b, b+5);
    sort(a.begin(), a.end());

    for(int i:b) cout << i << " "; // 1 2 3 4 5 
    cout << "\n";
    for(int i:a) cout << i << " "; // 1 2 3 4 5 
    cout << "\n";

    sort(b, b+5, less<int>());
    sort(a.begin(), a.end(), less<int>());
    for(int i:b) cout << i << " "; // 1 2 3 4 5 
    cout << "\n";
    for(int i:a) cout << i << " "; // 1 2 3 4 5 
    cout << "\n";

    // 내림차순
    sort(b, b+5, greater<int>());
    sort(a.begin(), a.end(), greater<int>());
    for(int i:b) cout << i << " "; // 5 4 3 2 1 
    cout << "\n";
    for(int i:a) cout << i << " "; // 5 4 3 2 1 
    cout << "\n";

    // pair 를 기반으로 만들어진 vector 의 경우 따로 설정하지 않으면
    // first, second, third 순으로 차례차례 오름차순 정렬된다.
    for (int i=10; i>=1; i--) {
        v.push_back({i, 10-i}); // (10, 0), (9, 1), .. ,(1, 9)
    }
    sort(v.begin(), v.end()); 
    for (auto it: v) cout << it.first << " : " << it.second << "\n";
    // auto if: v === pair<int, int> it: v

    // first: 내림차순, second: 오름차순으로 정렬
    // => 커스텀 비교함수 cmp를 만들어 매개변수로 넣기 
    sort(v.begin(), v.end(), cmp);
    for (auto it: v) cout << it.first << " : " << it.second << "\n";

    return 0;
}