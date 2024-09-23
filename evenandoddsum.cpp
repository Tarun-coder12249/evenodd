#include<iostream>
using namespace std;
int main(){
    int even=0,odd=0;
    for(int i=1;i<=50;i++){
        if(i%2==0){
            even+= i;
        }
        else{
            odd+= i;
        }
    }
    cout<<"The sum of the even number is :"<<even<<endl;
    cout<<"The sum of the odd number is :"<<odd<<endl;

}