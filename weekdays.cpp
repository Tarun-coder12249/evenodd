#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter your choice from menu:\n1.Sunday\n1.Monday\n3.tuesday\n4.Wednesday\n5.thrusday\n6.Friday\n7.saturday\n your choice:";
    cin>>day;
    switch(day){
        case 1:cout<<"Its Sunday";
        break;
        case 2:cout<<"Its Monday";
        break;
        case 3:cout<<"Its Tueday";
        break;
        case 4:cout<<"Its Wednesday";
        break;
        case 5:cout<<"Its Thrusday";
        break;
        case 6:cout<<"Its Friday";
        break;
        case 7:cout<<"Its Saturday";
        break;
        default:cout<<"Its Invalid";
        break;
    }
}