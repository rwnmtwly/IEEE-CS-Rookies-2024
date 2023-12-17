#include<iostream>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n){
    // Base case: Fibonacci(1) is 0
    if(n==1){
        return 0;
    }
    // Base case: Fibonacci(2) is 1
    if(n == 2){
        return 1;
    }
    // Recursive case: Fibonacci(n) is the sum of Fibonacci(n-1) and Fibonacci(n-2)
    return fibonacci((n-1))+fibonacci((n-2));
}
int main(){
    int n;
    // Prompt the user to enter the value of n
    std::cin>>n;
    // Check if the input is negative   
    if(n<0){
        return 0;
    }
    // Output the nth Fibonacci number
    std::cout<<fibonacci(n);
    return 0;
}