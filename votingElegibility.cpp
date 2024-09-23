#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age : ";
    cin >> age;

    if(age >= 18){
        cout<<"Eligible for Voting";
    }
    else{
        cout<<"Not Eligible for Voting";
    }
}