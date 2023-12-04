#include<iostream>
int main(){
    int n;
    std::string s;

    std::cin>>n>>s;
    
    int count = 1; //to count the current subsequence size
    int max = 1; //to count the maximum subsequence size

    //We iterate over the characters of the string from the second character
    for(int i = 1; i < n;i++){
        if(s[i]!=s[i-1]){       //If the current character is different from the previous character,
            count++;            //we increment count because we can include this character in the subsequence.
        }
        else{                           //If the current character is the same as the previous character,
            max = std::max(max,count);  //we update max with the maximum between the current max and count,
            count = 1;                  //reset count to 1 because we can't include this character in the subsequence.
        }

    }
    max = std::max(max,count);      //we update max with the maximum between the current max and count
                                    // in case the last character forms part of the maximum subsequence.
    std::cout<<max<<"\n";
    return 0;
}