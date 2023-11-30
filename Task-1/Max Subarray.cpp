#include<iostream>

 int main(){
    int T; //test cases
    std::cin>>T;

    while(T--){
        int size;       //array size
        std::cin>>size;

        //initializing the array
        int arr[size];
        for(int i = 0; i < size; i++){
            std::cin>>arr[i];
        }

        for(int i = 0; i < size; i++){  //iterating through all possible subarrays
            int max = -1;
            //finding the maximum value of each subarray
            for(int j = i; j < size; j++){
                max = std::max(max,arr[j]);
                std:: cout<< max<<" ";
                } 
            }
        }
        std::cout<<"\n";
    
    return 0;
} 


//another code 

int main(){
    int t;
    std:: cin>> t;
    while (t--){
    int n; 
    std:: cin >> n;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        std:: cin>>arr[i];
    }
    for (int i = 0; i<n ; i++){
        std::cout<<arr[i]<<" "; 
    }
    
    for(int i = 0; i< n; i++){
        int max = arr[i];
        for(int j = i+1; j<n ; j++){
            max = std::max(max,arr[j]);
            std::cout<<max<<" ";
        }
    }
    std::cout<<"\n";
    }

    return 0;
}