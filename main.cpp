//This program has been coded by Mesut Apil
#include<iomanip>
#include<iostream>

using namespace std;

int main(){
    
    int floorNumber;
    double totalRooms;
    cout<<" Please enter Number of floors in the Hotel"<<endl;
    cin>>floorNumber;
    double roomNumber[floorNumber];
    
    totalRooms = 0;
    for(int i = 1; i<=floorNumber; i++){
        cout<<"Please enter room number in floor "<<i<<endl;
        cin>>roomNumber[i];
        totalRooms += roomNumber[i];
    }
    cout<<" This hotel has total of "<<totalRooms<<" rooms"<<endl;
}
