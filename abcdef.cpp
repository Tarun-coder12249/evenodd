#include<iostream>
using namespace std;
int main(){
    char ch=97;
    for(int i=97;i<=99;i++){
        for(int j=97;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}