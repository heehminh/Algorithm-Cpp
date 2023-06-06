#include<bits/stdc++.h>
using namespace std;

const int max_n = 1004;
int a[max_n];
int a2[max_n][max_n];

int main() {
    memset(a, -1, sizeof(a));
    memset(a2, 0, sizeof(a2));
    for (int i=0; i<10; i++) cout << a[i] << " ";
    return 0;
}

// 0 또는 -1로 값을 초기화할 땐 fill 보다 memset을 사용하는게 훨씬 간단하다.