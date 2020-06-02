#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string> st;
    // to insert into set
    st.insert("a");
    st.insert("a");
    st.insert("c");
    st.insert("f");
    st.insert("a");
    st.insert("c");
    for(auto it :  st){
        cout << it <<" ";
    }


    // count -> search exist ?? != zero return 
// if not exist --> 0 value 
    // erase -> st.earse(c);

    if(st.count("f")){
        cout <<"YES\n";
    }else{
        cout <<"Not exists";
    }

    if(st.find("d") != st.end()){
        cout <<"yes present\n";
    }else cout <<"no\n";

}
