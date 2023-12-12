#include<iostream>
#include<algorithm>
int main(){
    int n;
    std::cin>>n;
    int arr1[n],arr2[n];        //defining two arrays of the same size
    //filling the first array
    for(int i = 0; i < n; i++){
        std::cin>>arr1[i];
    }
    //filling the second array
    for(int i = 0; i < n; i++){
        std::cin>>arr2[i];
    }
    std::sort(arr1,arr1+n);
    std::sort(arr2,arr2+n);
    for(int i = 0; i < n; i++){
        if(arr1[i]!=arr2[i]){
            std::cout<<"no";
            return 0;
        }
    }
    std::cout<<"yes";
    return 0;
}