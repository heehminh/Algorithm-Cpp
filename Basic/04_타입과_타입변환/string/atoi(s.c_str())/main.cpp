// 문자열을 int로 바꿔야 할 때
// 입력받은 글자가 문자열인지 숫자인지 확인해야 하는 로직이 필요하다

#include <bits/stdc++.h>
using namespace std;

int main() {
    // 입력받은 문자열이 문자라면 0을 반환하고 아니라면 숫자를 반환한다
    string s = "3";
    string s2 = "string";
    cout << atoi(s.c_str()) << "\n";
    cout << atoi(s2.c_str()) << "\n";
    return 0;
}

/*
3
0
*/