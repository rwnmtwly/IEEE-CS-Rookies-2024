#include<iostream>
#include<iomanip>


// Function to calculate the average of elements in an array using recursion
double arrayAvarage(double arr[], int n,double sum = 0.0,int index = 0){
    // Base case: If the index reaches the size of the array
    if(index == n){
        // Check for division by zero and return the average
        if(n == 0){
            return 0.0;
        }
        return sum/n;
    }
    // Recursive case: Add the current element to the sum and move to the next index
        sum+=arr[index];
    // Recursive call to process the next element in the array
    return arrayAvarage(arr,n,sum,index+1);
    
}
int main(){
    int n;
    // Input the size of the array
    std::cin>>n;
    // Check for invalid input size
    if(n<1){
        return 0;
    }
    // Declare an array of size n
    double arr[n];
    // Input array elements
    for(int i = 0; i < n; i++){
        std::cin>>arr[i];
    }
    // Output the average with precision set to 6 decimal places
    std::cout<<std::fixed<<std::setprecision(6)<<arrayAvarage(arr,n,0,0);
    
    return 0;
}