#include<iostream>
int main(){
    int q;
    std::string s;
    std::cin>>q;
    std::cin>>s;
    std::string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    std::string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    //user inputs 1 means they want to encrypt
    if(q==1){
        for(int i = 0; i<s.length();i++){
            int index = original.find(s[i]);     //we use the find func. to get the index of the character in the original
                                                //and get the character of same index from the key 
            s[i]=key[index];
        }
    }
    if(q==2){
        for(int i = 0; i<s.length();i++){
            int index = key.find(s[i]);     //we replace each encrypted character with 
                                            //its corresponding character from the original to decrypt
            s[i]=original[index];
        }
    }
    std::cout<<s<<"\n";
    return 0;
}