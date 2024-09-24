#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the three number :";
    cin>>n1>>n2>>n3;
    if(n1>n2&&n1>n3){
        cout<<"N1 is the greatest of all";
    }
    else if(n2>n1&&n2>n3){
        cout<<"N2 is the greatest of all";

    }
    else{
        cout<<"N3 is the greatest of all";
    }
}