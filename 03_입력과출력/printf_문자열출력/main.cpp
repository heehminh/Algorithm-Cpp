#include<bits/stdc++.h>
using namespace std;

double a = 1.23456789;
int b = 12;
int c = 2;
string str = "어벤져스";

int main() {
	printf("%.6lf\n", a);
	printf("%02d\n", b);
	printf("%02d\n", c);
	printf("아이언맨 : %s\n", str.c_str());
	return 0;
}

/*
1.234568
12
02
아이언맨 : 어벤져스
*/

// printf를 기반으로 문자열을 출력하려면 
// string을 문자열에 대한 포인터(char *) 타입으로 바꿔주어야 한다. 
// 그래서 보통 문자열을 출력할 때는 cout 을 사용하는 게 좋다.