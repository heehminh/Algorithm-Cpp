#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    for (int i=1; i<=5; i++)
        v.push_back(i);
    
    for (int i=0; i<5; i++) {
        cout << i << "번째 요소 : " << *(v.begin() + i) << "\n";
        cout << &*(v.begin() + i) << "\n";
        // 주소값을 바로 반환하지는 못하며
        // &*를 통해 한단계 더 거쳐서 가리키는 해당 요소의 주소값 반환 
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
        // 1 2 3 4 5 
    }

    cout << "\n";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
        // 1 2 3 4 5 
    }

    cout << "\n";   
    auto it = v.begin(); // 1 
    advance(it, 3); // 4 
    cout << *it << "\n";
}

/*
0번째 요소 : 1
0x142e06aa0
1번째 요소 : 2
0x142e06aa4
2번째 요소 : 3
0x142e06aa8
3번째 요소 : 4
0x142e06aac
4번째 요소 : 5
0x142e06ab0
1 2 3 4 5 
1 2 3 4 5 
4
*/