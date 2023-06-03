#include <bits/stdc++.h>
using namespace std;
int ret = 1; 

// 함수를 선언할 때는 항상 호출되는 위쪽 부분에 선언을 해야 한다.

// 아무것도 리턴하지 않는 함수 : void 
void a() {
	ret = 2;
	cout << ret << "\n";
	return;
}

// double 타입의 변수를 retrun 하는 함수 : double 형으로 정의 
double b() {
	return 1.2333;
}

// char 형 : 한 문자만 들어간다. (1바이트)
char d() {
	char a = 'a';
	return a;
}

int main() {
	a(); 
	cout << b() << "\n"; 
    char c = d();
    cout << c << "\n";
	return 0;
}

/*
2
1.2333
a
*/