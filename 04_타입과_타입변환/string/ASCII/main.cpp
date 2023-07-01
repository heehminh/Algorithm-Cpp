#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s = "123";
	s[0]++;
	cout << s << "\n"; // 223

    char a = 'a'; 
    cout << (int)a << "\n"; // 97

	return 0;
}

// 1. 알파벳은 25개이다. (즉, 아스키코드 A+25 = 아스키코드 Z)
// 2. A: 65, a: 97