#include <iostream>

int main(){
    int N;      //array size
    std:: cin>>N;

    //itializing array
    int arr[N]; 
    for(int i = 0; i<N ; i++){
        std::cin>>arr[i];
    }
    //variavles for storing the maximun & minimum values in the array
    int min = INT_MAX;
    int max = INT_MIN;
    //a varaible for switching the min. & max. values 
    int temp;

    //iterating the array to find the minimum and maximum values
    for(int i = 0; i < N; i++){
        max = std::max(max, arr[i]);
        min = std::min(min, arr[i]);
    }
    //initializing varables to store the index of the min. & max. value in 
    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 0 ; i< N ; i++){
        if(arr[i]==max){
            maxIndex = i;
        }
        if(arr[i]==min){
            minIndex = i;
        }
    }
    //switching the two elements in the array
    temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
    for(int i = 0; i < N; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}