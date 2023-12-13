#include<iostream>
long long GCD(long long a, long long b){
    long long temp;
    if(a == 0){
        return std::abs(b);
    }
    else if(b == 0){
        return std::abs(a);
    }
    else if(a ==b){
        return std::abs(a);
    }
    while (b!=0){
        temp = a;
        a = b;
        b = temp%a;
    }
    return a;
}
long long LCM(long long a,long long b){
    long long result = (a*b)/GCD(a,b);
    return result;
}
int main(){
    long long A,B;
    std::cin>>A>>B;
    long long g = GCD(A,B);
    long long l = LCM(A,B);
    std::cout<<g<<" "<<l;
    return 0;
}