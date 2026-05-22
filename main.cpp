#include <iostream>
using namespace std;

int main(){
int numberPicked;
int asked;
numberPicked=18;
int numberUser;
cout<<"Try to guess the number"<<endl;
cin >> numberUser;

while(numberUser !=numberPicked){
    cout<<"Wrong number! Pick again"<<endl;

    cin>> numberUser;
    asked = asked + 1 ;
    
    if(numberUser == numberPicked) {
    cout<<"Congrats";
    break;
    }
    
    if (asked == 4) {
        break;
    }
}
return 0;
}