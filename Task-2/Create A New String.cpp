#include <iostream>
int main(){
    std::string s, t;
    std::cin>>s>>t;     //input of the two strings
    int count = 0;      //counter variable for 1st string
    int count2 = 0;     //counter variable for 2nd string

    //interating through the string and if any letters found counters increment by 1
    for (int i = 0; i < (sizeof(s)/sizeof(s[0])); i++){

        if((int(s[i])>=65&&int(s[i])<=90)||(int(s[i])>=97&&int(s[i])<=122)){
           // std::cout<<s[i];
            count++;
        }
    }
   // std::cout<<"\n";
    for (int i = 0; i < (sizeof(t)/sizeof(t[0])); i++){

        if((int(t[i])>=65&&int(t[i])<=90)||(int(t[i])>97&&int(t[i])<=122)){
           // std::cout<<t[i];
            count2++;
        }  

    }
    std::cout<<count<<" "<<count2<<"\n";
    std::cout<<s<<" "<<t<<"\n";

// another code using the length() method:
int n = s.length();
int m = t.length();
std::cout<<n<<" "<<m<<"\n";
std::cout<<s<<" "<<t;
    return 0;
}