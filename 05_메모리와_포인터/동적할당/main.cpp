#include<bits/stdc++.h>
using namespace std;

int a; // (BSS) 전역변수 - 어떠한 값으로도 초기화되지 않은 변수 
int b = 0; // (BSS) 전역변수 - 0으로 초기화 
const int c = 0; // (BSS) const - 0으로 초기화 

int e = 1; // (Data) 전역변수 - 0이 아닌 값으로 초기화
const int f = 2; // (Data) const - 0이 아닌 값으로 초기화

int main() {
	static int d = 0; // (BSS) static - 0으로 초기화
    static int g = 3; // (Data) static - 0이 아닌 값으로 초기화 
	return 0;
}