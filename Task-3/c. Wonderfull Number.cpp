#include<iostream>
//function to find whether the number is odd or even
int odd (int n){
    if(n%2!=0){
    return 1;
    }
    return 0;
}

int palindromeBinary(int n){
    //to get the binary representation
    int arr[32];
    int index = 0;
    while(n>0){
        arr[index]=n%2;
        n=n/2;
        index++;
    }
    //checking if the binary representation is a palindrome
    for (int i = 0; i< index/2; i++)    //iterating through the first half of the binary representation
    {
        if(arr[i]!=arr[index - i -1])  //if the first half is identical to the second half and the representation is symmetric
        {
            return 0;
        };
    }
    return 1;
}
int main(){
    int n;
    std::cin>>n;
    bool x = odd(n);
    bool y = palindromeBinary(n);
    if(x==1&&y==1)  //if the number is wonderful(both functions return 1)
    {
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
    return 0;
}