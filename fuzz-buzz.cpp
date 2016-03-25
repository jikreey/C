#include <iostream>

using namespace std;
int a;
int main()
{
    for(int i=1;i<100;i++){
        if(i%15 == 0){
            cout<<"fuzz buzz"<<endl;
        }
        else if(i%3 == 0){
            cout<<"fuzz"<<endl;
        }
        else if(i%5 == 0){
            cout<<"buzz"<<endl;
        }
        else if (i%3 != 0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
