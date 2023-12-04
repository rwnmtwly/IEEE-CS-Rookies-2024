#include<iostream>
int main(){
    std::string h = "hello";
    std::string s;
    std::getline(std::cin, s);      //user input
    //size of subsequence can't be bigger than size of original string
    if(s.length()<h.length()){
        std::cout<<"NO";
        return 0;
    }
    //intializing j to iterate throught the "hello" string
    //and compare with the input string
    int j = 0;
    for (int i = 0; i < s.length(); i++){
        
        if(s[i]==h[j]){
            j++;
                            
        }
    }
    //j can't be > the number of letters in "hello"
    if(j == h.length()){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
    return 0;
}