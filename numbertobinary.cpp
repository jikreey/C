#include <iostream>
using namespace std;
int number;
int main(){
    cout<<"masukkan angka: ";
    cin>>number;
    for(int q=0;number>0;q++){
    if((number%2) == 0)
        cout<<"0";
    else
        cout<<"1";
    number=number/2;
}
}
