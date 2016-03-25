#include <iostream>
using namespace std;

string input;

int main(){
    cout<<"Masukkan input: "<<endl;
    getline(cin, input);
    
    for(int i = input.length() - 1; i>-1; i--){
        cout<<input[i];
    }
}
