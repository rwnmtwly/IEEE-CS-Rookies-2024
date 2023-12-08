#include<iostream>
// maximum number
int maximum(int size, int arr[]){
    int max=INT_MIN;
    for(int i = 0; i<size; i++){
        max = std::max(arr[i],max);
    }
    return max;
}
// minimum number
int minimum(int size, int arr[]){
    int min = INT_MAX;
    for (int i = 0; i < size; i++){
        min = std::min(arr[i],min);
    }
    return min;
}
// checking if number is prime
bool isPrime(int n){
    if(n<= 1){
        return false;
    }
    for(int i = n-1; i>=2 ;i--){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
// counting prime numbers
int prime(int size, int arr[]){
    int primeCount  = 0;
    for(int i=0; i< size; i++){
        if(isPrime(arr[i])){
            primeCount++;
        }
    }
    return primeCount;
}
// checking if number is palindrome
bool isPalindrome(int n){
    int originalNumber= n;
    int reversedNumber = 0;
    while(n>0){
        reversedNumber = reversedNumber *10 + originalNumber%10;
        n /= 10;
    }
    return originalNumber == reversedNumber;
}
// counting palindrome numbers
int palindrome(int size, int arr[]){
    int palindromeCount = 0;
    for(int i = 0; i < size; i++){
        if(isPalindrome(arr[i])){
            palindromeCount++;
        }
    }
    return palindromeCount;
}
//counting the number of divisors for a number
int numDivisors(int n){
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
//getting the number that has the maximum number of divisors
int maxNumDivisors(int size, int arr[]){
    int maxNumber = INT_MIN;
    int maxElement = 0;
    for(int i = 0; i< size; i++){
        int n = numDivisors(arr[i]);
        if(n > maxNumber){
            maxNumber= n;
            maxElement = arr[i];
        }
        else if(n == maxNumber){
            maxElement = std::max(maxElement,arr[i]);
        } 
    }
    return maxElement;
}
int main()
{
    int size;
    std::cin>>size;
    int arr[size];
    for(int i = 0; i<size; i++){
        std::cin>>arr[i];
    }
    int a = maximum(size,arr);
    int b = minimum(size,arr);
    int c = prime(size,arr);
    int d = palindrome(size, arr);
    int e = maxNumDivisors(size,arr);
    std::cout<<"The maximum number : "<<a<<"\n"<<"The minimum number : "<<b<<"\n"<<"The number of prime numbers : "<<c<<"\n"<<"The number of palindrome numbers : "<<d<<"\n"<<"The number that has the maximum number of divisors : "<<e<<std::endl;

    return 0;
}
