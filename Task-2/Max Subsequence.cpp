#include<iostream>
int main(){
    int n;
    std::string s;

    std::cin>>n>>s;
    
    int count = 0; //to count the current subsequence size
    char temp;      // a char variable to store the characters of the string in and compare them
    //We iterate over the characters of the string
    for(int i = 0; i < n;i++){
        if(i == 0){
            temp = s[i];
            count++;
        }
        else if(s[i]!=temp){       //If the current character is different from the previous character,
            count++;               //we increment count because we can include this character in the subsequence.
            temp = s[i];            
        }
    }
    std::cout<<count<<"\n";
    return 0;
}