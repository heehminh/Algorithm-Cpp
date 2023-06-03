// cin으로 T개의 getline을 받을지 결정하고
// T개만큼 입력이 들어오는 상황
// 특정 문자열을 기반으로 버퍼플래시를 하고 받아야함

#include <bits/stdc++.h>
using namespace std;
int T;
string s;

int main() {
	cin >> T;
	string bufferflush;
	getline(cin, bufferflush);
	for (int i=0; i<T; i++){
		getline(cin, s);
		cout << s << "\n";
	}
	return 0;
}
