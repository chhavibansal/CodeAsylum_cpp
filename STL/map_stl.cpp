#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;

    mp[1] = 1;
    mp[7] = 24;
    mp[3] = 4;

    mp.insert(make_pair(4,10));
    for(auto it : mp){
        cout << it.first << "  "<< it.second<<"\n";
    }
}