#include<iostream>
int main(){
    int T;
    std::cin>>T;
    while(T--){
        std::string s;
        std::cin>>s;        //user input
        //a bool variable that;s used as a flag
        bool c = 0;
        for(int i = 0; i < s.length(); i++){
            
            if((s[i-1]=='0' && s[i]=='1' && s[i+1] == '0')){
                c=1;
                std::cout<<"Good"<<"\n";
                break;
                   
                }
            else if(s[i-1]=='1' && s[i]=='0' && s[i+1]=='1'){
                c=1;
                std::cout<<"Good"<<"\n";
                break;
                
            }
        }
        if(c== 0){      //if the flag stays zero that means that none of the conditions were met
            std::cout<<"Bad"<<"\n";
        }
    }
    return 0;
}