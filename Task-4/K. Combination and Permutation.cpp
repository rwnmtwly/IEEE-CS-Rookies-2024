#include<iostream>

// Function to calculate the factorial of a number 
long long factorial(long long a){
    if(a == 0 || a == 1){
        return 1; // Base case: factorial of 0 and 1 is 1
    }

    long long result = 1;
    long long i = 2;

    // Calculate factorial using a loop
    while(i<=a){
        result*=i; // Multiply the result by the current value of i
        i++; // Increment i for the next iteration
    }
    return result;
}
int main(){

    long long A, B;
    // Input two numbers A and B
    std::cin>>A>>B;

    // Check if A is less than B, and exit the program if true
    if(A<B){
        return 0;
    }

    // Calculate factorials of A, B, and (A-B)
    long long n = factorial(A);
    long long c = factorial(B);
    long long m = factorial(A-B);

    // Calculate permutation and combination
    long long permute = n/m;
    long long combine =permute/c;
    
    // Output the result
    std::cout<<combine<<" "<<permute;
    
    return 0;
}