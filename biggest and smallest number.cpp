#include <iostream>
using namespace std;

int input[4] = {0,10,20,30};
int big, small;

void smallandbig(){
     big=small=input[0];
    for(int i=0;i<4;i++){
        if(input[i]>big){
            big=input[i];
        }
        else if(input[i]<small){
            small=input[i];
        }
    }
}
int main(){
    smallandbig();
    cout<<"The biggest number: "<<big<<endl;
    cout<<"The smallest number: "<<small<<endl;
}
