#include <iostream>
#include <string>
using namespace std;

string pigLatin(string word){
    string pigWord, pigSentence = "";
    int length = 0, index = 0;

    while(word[index] != '\0'){
        if(word.find(' ', index) != -1){
            length = word.find(' ', index);
            length -= index;
            pigWord = word.substr(index,length);
            pigWord.insert(length, "ay");
            pigWord.insert(length,1,word[index]);
            pigWord.erase(0,1);
            index += length + 1;
        }
        else{
            pigWord = word.substr(index);
            length = pigWord.length();
            pigWord.insert(length, "ay");
            pigWord.insert(length,1,word[index]);
            pigWord.erase(0,1);
            index = word.length();
        }
        pigSentence += (pigWord + " ");
    }
    return pigSentence;
}

int main(){
    string input;
    cout<<"Write sentence: ";
    getline(cin, input);
    input=pigLatin(input);
    cout<<"result: "<<input<<endl;
}
