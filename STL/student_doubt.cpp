#include<iostream>
#include<vector>
using namespace std;
  vector<vector<int>> intermediate;
void printRecursion(int start, int n) {
   
    if(start >= n)
        return;
    if(start == 0) {
        vector<int> temp;
        temp.push_back(1);
        intermediate.push_back(temp);
        printRecursion(start + 1, n);
    }
    else if(start == 1) {
        vector<int> temp;
        temp.push_back(1);
        temp.push_back(1);
        intermediate.push_back(temp);
        printRecursion(start + 1, n);
    }
    else {
        
        int i;
        vector<int> temp ;
        for(i = 0; i <= start; i++) {
            if(i == 0 || i == start){
                temp.push_back(1);
                // continue
            }else{
                int sum = intermediate[start-1][i]+ intermediate[start-1][i-1];
                temp.push_back(sum);
            }
        }
        intermediate.push_back(temp);
        printRecursion(start + 1, n);
    }
}
 
int main() {
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    printRecursion(0, n);

    for(auto row : intermediate){
        for(int  x : row){
            cout << x <<" ";
        }
        cout <<endl;
    }
    return 0;
}