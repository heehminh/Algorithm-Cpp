// STL에서 지원하는 메서드
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "It's hard to have a sore leg";
    reverse(a.begin(), a.end());
    cout << a << "\n";

    reverse(a.begin(), a.end());
    cout << a << "\n";

    // 시작위치를 바꿔 뒤집고 싶은 부분만 뒤집을 수 있다. 
    reverse(a.begin()+3, a.end());
    cout << a << "\n";

    return 0;
}

/*
gel eros a evah ot drah s'tI
It's hard to have a sore leg
It'gel eros a evah ot drah s
*/