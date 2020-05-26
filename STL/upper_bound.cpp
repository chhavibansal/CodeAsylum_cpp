#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec{10,20,30,30, 40,50};

    // > value in the vector 
    auto it = upper_bound(vec.begin() , vec.end() , 50);
    cout << *it <<" "<< it- vec.begin()<<"\n";

    auto itr = lower_bound(vec.begin() , vec.end() , 30);

    cout << *itr <<" "<<itr-vec.begin()<<"\n";

    // next  >= value present in the vector 
    auto den = lower_bound(vec.begin() , vec.end() , 35);

    cout << *den <<" "<<den-vec.begin();
}