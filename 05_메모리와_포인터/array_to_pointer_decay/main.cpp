#include<bits/stdc++.h>
using namespace std;

int a[3] = {1, 2, 3};

int main() {
    int *c = a;
    // 포인터 c에 배열의 이름을 할당하면서, 
    // 배열의 크기 정보는 없어지고 첫번째 요소(1)의 주소가 바인딩
    cout << c << "\n";
    cout << &a[0] << "\n";
    cout << c+1 << "\n";
    // 배열의 두번째 주소로 이동 
    cout << &a[1] << "\n";
    return 0;
}

/*
0x100c94000
0x100c94000
0x100c94004
0x100c94004
*/