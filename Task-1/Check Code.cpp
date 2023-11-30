#include<iostream>

int main(){
    int A, B;
    std::string S;
    std::cin>>A>>B;
    //getting a string from user
    std::cin>>S;
    //checking if '-' is at the right index
    if(S[A]!= '-'){
        std::cout<<"No";
        return 0;       //so that the code would stop excuting any further blocks and avoid inaccurate output
    }
    bool v = 0;
    for (int i = 0; i<S.length();i++){
        if((S[i]<'0' || S[i]>'9') && i!=A){
            v = 1;
        }
        
    }
    if(v==0){       //means that the element passed all the coditions in the for loop and if condition
            std::cout<<"Yes";
        }
    else{
            std::cout<<"No";
        }
    return 0;
}