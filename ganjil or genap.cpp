#include <iostream>
using namespace std;

int input;

void decide(){
    if(input%2 == 0){
        cout<<"input is even"<<endl; //nilai genap
    }
    else if(input%2 == 1){
        cout<<"input is odd"<<endl; //nilai ganjil
    }
}

int main(){
    cout<<"Insert number: ";
    cin>>input;
    decide();
}
