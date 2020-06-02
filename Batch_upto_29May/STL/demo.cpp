#include <iostream>
#include <vector>
#include <bits/stdc++.h>
bool cmp(int a, int b){
    return a > b;
}
using namespace std;
int main()
{
    int arr[3] = {4, 5, 1};
    sort(arr, arr + 3);
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(-5);
    vec.push_back(9);
    // int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ",";
    }
    cout << endl;
    // for(int element: vec){
    //     cout << element<<" ";
    // }
    // for-each loop
    // for(auto  element: vec){
    //     cout << element<<" ";
    // }
    cout << "\n";
    sort(vec.begin(), vec.end(), cmp);

    for (int element : vec)
        cout << element << " ";

    // swap(vec[0], vec[1]);
    // cout << "\n";
    // for (int element : vec)
    //     cout << element << " ";

    // vector<char> c;
    // c.push_back('a');
    // c.push_back('g');
    // c.pop_back();

    // for(char element : c) cout << element<<" ";
    
}