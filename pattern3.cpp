#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j ;
            j++ ;
        }
        cout <<endl;
        i++;
    }
}