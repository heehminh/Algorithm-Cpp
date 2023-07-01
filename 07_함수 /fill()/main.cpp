#include<bits/stdc++.h>
using namespace std;

int a[10];
int b[10][10];

int main() {
    // fill(&a[0], &a[10], 100);
    fill(a, a+10, 100);
    // 1차원의 경우 배열의 이름 + 숫자로 가능하지만
    // 2차원 이상일 경우에는 반드시 &b[0][0] + 숫자로 해야한다.

    for (int i=0; i<10; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    fill (&b[0][0], &b[9][10], 2);

    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}