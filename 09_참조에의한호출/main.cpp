// 참조에의한호출 - 함수 내부에서 해당 매개변수를 변경하게 되면 실제 원본변수에도 반영된다

#include <bits/stdc++.h>
using namespace std;
int sum_;

int add(int &a, int b) {
    a += 10;
    cout << a << "\n";
    return a+b;
}

int main() {
    int a=1;
    int b=2;
    sum_ = add(a, b); // 11
    cout << a << "\n"; // 11
    return 0;
}