#include<iostream>
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
    int c = 1;                 //initializing a counter variable with 1
                               //since it's compared with n and not n-1

    //iterating through the first array                           
    for(int i = 0; i < n ; i++){
        //iterating through the second array
        for(int j = 0; j < n; j++){
            //checking if any elements of the second array are equal 
            //to the current element of the first array
            if(arr1[i]==arr2[j])
            c++;
            else{
               continue;       //if not equal we continue comparing the other elements
            }
        }
    }
    //for arr2 to be a permutaion of arr1 count needs to be
    //larger than their size, as there may be repeated elements
    if(c>n){
        std::cout<<"yes"<<"\n";
    }
    else{
        std::cout<<"no"<<"\n";
    }
    return 0;
}