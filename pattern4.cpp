#include<iostream>
// 3 2 1 
// 3 2 1 
// 3 2 1 
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1<<" " ;
            j++ ;
        }
        cout <<endl;
        i++;
    }
}