#include<bits/stdc++.h>
using namespace std;

string keypad[10]= { "", "", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void keypad_recursion(string in , string out, int i ){
    // base case
    if(i == in.size()){
        cout << out <<", ";
        return ;
    }

    //extract digit at the ith position 
    int digit = in[i]-'0';
    if(digit == 0 || digit == 1){
        keypad_recursion(in, out , i+1);
    }
    for(int k = 0 ; keypad[digit][k] != '\0'; k++){
        // out+= keypad[digit][k]; //permanent cahnge
        keypad_recursion(in , out+keypad[digit][k], i+1);
        // out.pop_back();
    }
}

// time complexity O(N)
int power_slow(int a , int n){
    if(n == 0) return 1;
    return a*power_slow(a, n-1);
}
// time complexity O(logn)
int fast_power(int a, int n){
    if(n == 0 ) return 1;
    int smallAns = fast_power(a, n/2);
    smallAns*= smallAns;
    if(n%2 == 1){
        smallAns= a*smallAns;
    }
    return smallAns;
}

int main(){
    int a , n;
    string str;
    cin >> str;
    keypad_recursion(str, "" , 0);
    // cin >> a >> n;
    // cout << power_slow(a , n);
    // cout <<endl;
    // cout << fast_power(a, n);
}