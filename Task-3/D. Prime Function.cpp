#include<iostream>
//checking if the number is prime
int isPrime(int n){
    if(n==0 || n==1)
    {
        return 0;
    }
    for(int i = n-1; i>=2; i--){
        if(n%i==0){
            return 0;
        }  
    }
    return 1;
}
int main(){
    int T;
    std::cin>>T;
    while(T--){
        int n;
        std::cin>>n;
        int y = isPrime(n);
        if(y==1){
            std::cout<<"YES\n";
        }
        else{
            std::cout<<"NO\n";
        }
    }
    return 0;
}