#include<iostream>

int i = 0; // Global variable to keep track of the current index

// Function to print digits of a string recursively
void printDigits(std::string n){
    // Base case: if the index 'i' reaches the length of the string, return
    if(i==n.length()){
        return;
    }

    // Print the current digit at index 'i'
    std::cout<<n[i]<<" ";

    // Move to the next digit by incrementing the index 'i'
    i++;

    // Recursive call to print the remaining digits
    printDigits(n);
}
int main(){
    int testCase;
    std::cin>>testCase;

    // Loop through each test case
    while(testCase--){
        std::string n;
        std::cin>>n;

        // Reset the index 'i' before processing each test case
        i = 0;

        // Call the function to print digits of the input string
        printDigits(n);

        // Output a newline to separate test cases
        std::cout<<"\n";
        
    }
    
    return 0;
}