#include<iostream>

int main(){
    int n;
    std::cin>>n;
    //user inputs the elements of the array
    int arr[n];
    for(int i = 0; i < n; i++){
        std::cin>>arr[i];
    }
    //defining a variable with the maximum value an integer can hold
    //so that any other value would be less if compared
    int min  = INT_MAX;
    //defining and intializing a counter variable
    int count=0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        //checking if the array elements are even
        //and counting how many times they're divided by 2
        while(arr[i]%2 == 0)
        { 
            count ++;  
            arr[i]/=2;

        }
        
         min= std::min(count,min);
         
    }
    std::cout<<min;
    return 0;
}