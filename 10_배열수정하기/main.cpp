#include <bits/stdc++.h>
using namespace std;

int a[3] = {1, 2, 3};

// 방법 1: 크기를 정하지 않은 int a[]
void go(int []) {
    a[2] = 100;
}

// 방법 2: 배열의 크기인 int a[3]
void go2(int a[3]) {
    a[2] = 1000;
}

// 방법 3: 배열의 포인터
void go3(int *a) {
    a[2] = 10000;
}

int main() {
    go(a); cout << a[2] << "\n"; // 1 2 100 
    go2(a); cout << a[2] << "\n"; // 1 2 1000
    go3(a); cout << a[2] << "\n"; // 1 2 10000
}