#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    vector<int> a { 1, 2, 3, 3, 3, 4};
    // 3이 시작되는 최소 지점 
    cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << "\n"; // 2 
    // 3을 초과하는 지점 
    cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << "\n"; // 5 

    // 이터레이터가 갖는 값 
    cout << &*lower_bound(a.begin(), a.end(), 3) << "\n"; // ... (1)
    cout << &*a.begin() << "\n"; // ... (2)
    cout << &*(a.begin()+1) << "\n"; // ... (3)
    cout << &*(a.begin()+2) << "\n"; // ...(1)과 동일 
    // (2) -> (3) -> (1)

    // lower_bound가 가리키는 요소 출력 
    cout << *lower_bound(a.begin(), a.end(), 4) << "\n"; // 4 

    // 숫자 3이 몇개 들어있는지 확인
    cout << upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3) << "\n"; // 3

    return 0;
}