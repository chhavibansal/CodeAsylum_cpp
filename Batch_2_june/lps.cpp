#include<bits/stdc++.h>
using namespace std;
int lps(string str){
    int n = str.size();
   int i, j, cl; 
   int L[n][n];  // Create a table to store results of subproblems 
  
  
   // Strings of length 1 are palindrome of lentgh 1 
   for (i = 0; i < n; i++) 
      L[i][i] = 1; 

    for (int len=2; len<=n; len++) 
    { 
        for (i=0; i<n-len+1; i++) 
        { 
            j = i+len-1; 
            if (str[i] == str[j] && len == 2) 
               L[i][j] = 2; 
            else if (str[i] == str[j]) 
               L[i][j] = L[i+1][j-1] + 2; 
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]); 
        } 
    } 
  
    return L[0][n-1]; 
}
int main(){
    string s1 ;
    cin >> s1;
    cout << lps(s1);
}