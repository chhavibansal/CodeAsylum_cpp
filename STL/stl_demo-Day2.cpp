#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{

    // sort by increasing order of pair->first
    // a.second  == b.second -> first ke basis peh increasing
    // a.first < b.first;
    if (a.second == b.second)
    {
        return a.first < b.first;
    }

    // increasing order meh sort karna h
    // a->second < b->second true ;

    return a.second < b.second;
}

bool cmp_decreasing(pair<int, int> a, pair<int, int> b)
{
    // agar first == a == b
    // decreasing acc to second
    if (a.first == b.first)
        return a.second > b.second;
    // a.first < b.first
    return a.first < b.first;
}
int main()
{
    // pair<int,int> arr[4];
    // int c ,d;
    // for(int i = 0 ; i < 4 ; i++ ){
    //     cin >> c >> d;
    //     arr[i] = make_pair(c, d);
    // }

    // for(int i = 0 ; i < 4 ; i++){
    //     cout << arr[i].first <<" "<< arr[i].second <<"\n";
    // }

    vector<pair<int, int>> vec;
    int a, b;
    for (int i = 0; i < 4; i++)
    {
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }

    // pair->first
    // pair->second
    for (auto it : vec)
    {
        cout << it.first << " " << it.second << "\n";
    }
    sort(vec.begin(), vec.end(), cmp);
    cout << endl;
    for (auto it : vec)
    {
        cout << it.first << " " << it.second << "\n";
    }
}