#include <iostream>
using namespace std;

int jumlah[4] = {90,83,80,99};

int main(){
    for(int i=0;i<4;i++){
        if(jumlah[i] >= 90){
            cout<<jumlah[i]<<", ";
        }
    }
}
