#include<iostream>
using namespace std;
int main(){
    int n;
    int factorial = 1;
    cout<<"Enter the value of n :";
    cin>>n;

    if(n<0){
        cout<<"The factorial of 0 do not Exit";
    }
    else{
        for(int i=1;i<=n;++i){
            factorial *= i;

        }
        cout<<"The factorial of"<<n<< "is"<<factorial;
    }
}