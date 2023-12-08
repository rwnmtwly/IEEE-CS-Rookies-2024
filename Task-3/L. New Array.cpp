#include<iostream> 
void thirdArray(int n,int arr1[],int arr2[])
{
    int arr3[n*2];      // the third array that will contain the two arrays
    for(int i = 0; i<n; i++)    //assigning elements to the first half of the array
                                //which should be the second array that the user enters
    {
        arr3[i]=arr2[i];
    }
    for(int i = n; i<n*2; i++)  //assigning elements to the seconde half of the array
                                //which should contain the first array that user enters
    {
        arr3[i]=arr1[i-n];
    }
    for(int i = 0; i<n*2; i++){
        std::cout<<arr3[i]<<" ";
    }
}
int main()
{
    int n;
    std::cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i< n ; i++){
        std::cin>>arr1[i];
    }
    for(int i = 0; i< n ; i++){
        std::cin>>arr2[i];
    }
    //calling our custom function
    thirdArray(n,arr1,arr2);

    return 0;
}