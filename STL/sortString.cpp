#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> vec{"eat", "tea", "tan", "ate", "nat", "bat"};
    for(string& s: vec){
        sort(s.begin() , s.end());
    }

    for(string s : vec){
        cout << s <<" ";
    }
}