#include <iostream>

int main(){
    int T;      //test cases
    std::cin>>T;

    while(T--){     //code will be excuted T number of times
    
        int size;       //array size
        std::cin>>size;
        
        int arr[size+1];    //to start array from index 1


        for(int i = 1; i<=size; i++){       //initializing array elements
            std::cin>>arr[i];
        }
        int minSum = 2147483647;   //setting the intial value to the highest number an integer can hold

        //code block to get the minimum summing value
        for(int i = 1; i <= size; i++){
            for(int j = i+1; j <= size; j++){
                int sum = arr[i] + arr[j] + j - i;
                minSum = std::min(minSum,sum);
            }
        }
        std::cout<<minSum<<std::endl;
    }
    return 0;
}
