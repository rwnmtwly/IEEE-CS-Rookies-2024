#include<iostream>
int main(){
    std::string s;
    std::getline(std::cin, s); //we use getline() to accomodate spaces

    //there should be at least one word
    int count = 1;

    //we iterate through the string and when there's a space followed by an alaphabetical character
    //not sympols, then this should count as a word
    for(int i = 0; i<s.length(); i++){
        if(int(s[i])==32 && ((int (s[i+1])>=65 && int (s[i+1])<=91) || (int (s[i+1])>=97 && int (s[i+1])<=122))){
            count++;
        }
    }
    std::cout<<count;
    return 0;
}