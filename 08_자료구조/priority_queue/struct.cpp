// struct를 담은 우선순위큐

#include <bits/stdc++.h>
using namespace std;

struct Point {
    // 1. 구조체의 멤버변수 y, x를 정의한다. 
    int y, x;
    
    // 2. y, x를 받아 멤버변수를 생성한다. 
    Point(int y, int x): y(y), x(x) {}

    // 3. 초기값 설정 (y, x가 정해지지 않은 경우 기본값 -1, -1로 설정한다.)
    Point(){y=-1; x=-1;}

    // 4. 연산자 오버로딩 
    bool operator < (const Point& a) const {
        if (x==a.x) return y < a.y;
        return x < a.x;
        // 최소: > 최대: < 
    }
};

priority_queue<Point> pq;

int main() {
    pq.push({1, 1});
    pq.push({2, 2});
    pq.push({3, 3});
    pq.push({4, 4});
    pq.push({5, 5});
    pq.push({6, 6});
    cout << pq.top().x << "\n"; // 1 
    // 우선순위큐에 커스텀 넣을 때 반대로 넣어야한다. 

    return 0;
}