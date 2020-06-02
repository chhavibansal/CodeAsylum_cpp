#include<iostream>
using namespace std;
 
void recursiveFunc(string str, int start, string temp ) {
    if(str.size()  == start) {
        cout << temp;
        return ;
    }
    temp+= str[start];
    if(start+1 < str.size() and str[start] == str[start+1]){
        temp+="*";

    }
    recursiveFunc(str, start+1 , temp);
}
 
int main() {
    cout << "Enter string" << endl;
    string str;
    cin >> str;
    // string result =
     recursiveFunc(str, 0,"");
    // cout << "Required string : " << result << endl;
    return 0;
}