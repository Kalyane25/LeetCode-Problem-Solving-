// 1
// 2 3
// 4 5 6
#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    int count=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" " ;
            count++;
            j++ ;
        }
        cout <<endl;
        i++;
    }
}