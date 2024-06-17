#include<iostream>
using namespace std;

int main() {

    int saving;
    cin>>saving;

    if(saving > 5000 ){
        if(saving > 12000){
         cout << "roadTrip with neha \n";
         }

         else{
         cout << "Shooping with neha \n";
         }

    }
    else if(saving >2000){
        cout << "rashmi \n";
    }
    else {
        cout << "Freinds \n";
    }
    return 0;
}