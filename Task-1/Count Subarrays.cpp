#include <iostream>

int main(){
    int T;
    std::cin>>T;        //user input of how many test cases
    while(T--){
        int n;          //number of elements in the array
        std::cin>>n;
        int arr[n];
        int count  =0;  //intializing a counter variable
        //entering the elements of the array
        for(int i = 0; i < n; i++){
            std::cin>>arr[i];
        }
        //starting point of subarrays
        for (int i = 0; i < n; i++ ){
            count++;
            //ending points of subarrays
            for(int j = i+1; j < n; j++){
                if(arr[j]>arr[j-1]){    //condition to only count increasing subarrays
                   count++;
                }
                else{
                    break;
                }
                }
            }
            std::cout<<count<<"\n";
        
       
    }
    return 0;
}