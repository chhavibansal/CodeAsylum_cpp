#include<iostream>
using namespace std;
void hawoi(int n , char src ,char dest , char helper){
    if( n == 0) return;

    hawoi(n-1 , src, helper , dest);

    cout<<"move "<< n<<" from "<<src <<" to "<<dest<<endl;

    hawoi(n-1, helper , dest, src);
}
int main(){
    int n; cin>>n;
    hawoi(n,'A','C','B');
}
