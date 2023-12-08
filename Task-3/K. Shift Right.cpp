#include<iostream>
void shiftRight(int size, int x, int arr[])
{
    while(x--){
        //shifting to the right
        int temp=arr[size-1];
        for(int i = size-1; i > 0; i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
    // Print the array after right shifts
    for (int i = 0; i < size; i++){
        std::cout<<arr[i]<<" ";
    }
}
int main(){
    int size, x;
    std::cin>>size>>x;
    int arr[size];
    for(int i = 0; i < size; i++){
        std::cin>>arr[i];
    }
    shiftRight(size,x,arr);
    return 0;
}