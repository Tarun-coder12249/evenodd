#include<iostream>
using namespace std;
int main(){
    int n,count = 0;
    cout<<"Enter the number :";
    cin>>n;
    
    for(int i = 2;i <= n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
            cout<<"The entered number is a prime number \n";
        }
    else{
            cout<<"The given number is not a prime number \n";
        }
    
}