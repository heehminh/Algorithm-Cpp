#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;

string a[] = {"주홍철", "양영주", "박종선"};

int main() {
    for (int i=0; i<3; i++) {
        mp.insert({a[i], i+1});
        mp[a[i]] = i+1;
    }

    cout << mp["kundol"] << "\n"; // 0 
    // mp에 해당 키가 없다면 0으로 초기화되어 있음

    mp["kundol"] = 4;

    cout << mp.size() << "\n"; // 4 

    mp.erase("kundol");

    auto it = mp.find("kundol"); 
    if (it == mp.end()) {
        cout << "없음" << "\n"; // 없음
    }

    mp["kundol"] = 100;

    it = mp.find("kundol");

    if (it != mp.end()) {
        cout << (*it).first << " : " << (*it).second << "\n"; 
        // kundol : 100 
    }

    for (auto it : mp) {
        cout << (it).first << " : " << (it).second << "\n";
        // kundol : 100 ~ 주홍철 : 1
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " : " << (*it).second << "\n";
    }

    mp.clear();

    return 0;
}