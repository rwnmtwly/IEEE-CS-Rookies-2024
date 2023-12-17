#include<iostream>

// Global variable to store the length of the sequence
int counter = 0;

// Recursive function to calculate the length of the 3n+1 sequence
int sequence(int n){
    // Base case: when n becomes 1, increment the counter and return 1
   if(n == 1){
    counter ++; // Increment the counter for each step in the sequence
    return 1;
   }
   // If n is even, recurse with n/2
    if(n%2==0){
        counter++;
        return sequence(n/2);
            
    }
    // If n is odd, recurse with 3n + 1
    else{
        counter++;
        return sequence(3*n + 1 );    
    }
    
    // This line is unreachable, but kept for completeness
    return 0;
}
int main (){
    int n;
    // Input the starting value for the sequence
    std::cin>>n;

    // Check if n is less than 1, and if so, return 0
    if(n<1){
        return 0;
    }

    // Call the sequence function and print the length of the sequence
    sequence(n);
    std::cout<<counter;

    // Reset the counter for future use
    counter = 0;
    return 0;
}