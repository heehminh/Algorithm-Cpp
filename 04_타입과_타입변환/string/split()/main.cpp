// STL에서 지원하지 않는 메서드 -> 만들어서 사용
#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main() {
    string s = "안녕하세요 string 문자열의 split 예제입니다!", d = " ";
    vector<string> a = split(s, d);
    for(string b : a) cout << b << "\n";
}

/*
안녕하세요
string
문자열의
split
예제입니다!
*/