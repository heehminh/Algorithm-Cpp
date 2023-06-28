#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> umap;

int main(){
    umap["bcd"] = 1;
    umap["aaa"] = 1;
    umap["aba"] = 1;
    for (auto it: umap) {
        cout << it.first << " : " << it.second << "\n";
    }
}

// 정렬이 되지 않는다 => 되도록 map을 사용하자