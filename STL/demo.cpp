#include <iostream>
#include <vector>
#include <bits/stdc++.h>

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
    // for-each loop
    // for(auto  element: vec){
    //     cout << element<<" ";
    // }
    cout << "\n";
    sort(vec.begin(), vec.end());

    for (int element : vec)
        cout << element << " ";

    swap(vec[0], vec[1]);
    cout << "\n";
    for (int element : vec)
        cout << element << " ";
}