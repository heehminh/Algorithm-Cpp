#include<bits/stdc++.h>
using namespace std;

int main() {
	string a = "abcda";
	string *b = &a; // 주소값 
	cout << b << "\n"; 
	cout << *b << "\n"; // 역참조를 걸어 주소값을 기반으로 값을 끄집어냄 
	return 0;
}
/*
0x16f0a30c0
abcda
*/