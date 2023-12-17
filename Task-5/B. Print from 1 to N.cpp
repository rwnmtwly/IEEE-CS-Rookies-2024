#include<iostream>

// Function to print numbers from 1 to n recursively
int printfrom1ton (int n){
    // Base case: stop recursion when n is 0
    if(n==0){
        return 0;
    }
    // Recursive call with n-1
    printfrom1ton(n-1);

    // Print the current value of n
    std::cout<<n<<"\n";  
    return 0; 
}
int main(){
    int n; 
    // Input: Get the value of n from the user
    std::cin>>n;
    // Call the function to print numbers from 1 to n
    printfrom1ton(n);
    return 0;
}