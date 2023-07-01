// 이중연결리스트
#include <bits/stdc++.h>
using namespace std;
list<int> a;

void print(list <int> a){
    for (auto it:a) cout << it << " ";
    cout << "\n";
}

int main() {
    for (int i=1; i<=3; i++) a.push_back(i); // 1 2 3 
    for (int i=1; i<=3; i++) a.push_front(i); // 3 2 1 1 2 3 

    auto it = a.begin(); it++;
    a.insert(it, 1000);
    print(a); // 3 10000 2 1 1 2 3 

    a.pop_front(); // 10000 2 1 1 2 3 
    a.pop_back();  // 10000 2 1 1 2 
    print(a); 

    cout << a.front() << " : " << a.back() << "\n"; // 10000 : 2 
    a.clear();
    return 0;

}

