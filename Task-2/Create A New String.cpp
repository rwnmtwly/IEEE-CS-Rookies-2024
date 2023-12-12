#include <iostream>
int main(){
    std::string s, t;
    std::cin>>s>>t;     //input of the two strings
    int n = s.length();
    int m = t.length();
    std::cout<<n<<" "<<m<<"\n";
    std::cout<<s<<" "<<t;
    return 0;
}