#include<iostream>
int main(){
    std::string s;
    std::getline(std::cin, s);      //user input

    //replacing commas with spaces
    for (int i = 0; i < s.length(); i++){
        if(int (s[i])== 44){
            s[i] = 32;
        }
    }
    //converting capital letters to small letters and vice versa
    for (int i = 0; i < s.length(); i++){
        if(int (s[i])>=97&&int(s[i])<=122){
            s[i]-=32;
        }
        else if(int (s[i])>=65&&int(s[i])<=90){
            s[i]+=32;
        }
    }
    
    std::cout<<s;
    return 0;
}