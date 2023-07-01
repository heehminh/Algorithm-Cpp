#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    for (int i=1; i<=10; i++) v.push_back(i);
    for (int a:v) cout << a << " "; // 1 2 3 ... 10 
    cout << "\n";
    v.pop_back();

    for (int a:v) cout << a << " "; // 1 2 3 ... 9 
    cout << "\n";

    v.erase(v.begin(), v.begin()+3);

    for (int a:v) cout << a << " "; // 4 5 6 .. 9 
    cout << "\n";

    auto a = find(v.begin(), v.end(), 100); 
    if (a==v.end()) cout << "not found" << "\n"; // not found 

    fill(v.begin(), v.end(), 10);
    for (int a:v) cout << a << " "; // 10 10 10 10 10 10 (원래 있는 원소만큼)
    cout << "\n";

    v.clear();
    cout << "아무것도 없을까?\n";
    for (int a:v) cout << a << " "; 
    cout << "\n";

    return 0;
}