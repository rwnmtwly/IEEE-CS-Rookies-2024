#include<iostream>
int main(){
    std::string s;
    std::getline(std::cin, s); //we use getline() to accomodate spaces

    // Initialize count to 0 (no words yet)
    int count = 0;

    //we iterate through the string and when there's a space followed by an alaphabetical character
    //not sympols, then this should count as a word
    for(int i = 0; i<s.length(); i++){
        // Check if the current character is an alphabetical character
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            // If we encounter the start of a word, increment the count
            if (i == 0 || !((s[i - 1] >= 'A' && s[i - 1] <= 'Z') || (s[i - 1] >= 'a' && s[i - 1] <= 'z'))) {
                count++;
            }
        }
    }
    std::cout<<count;
    return 0;
}