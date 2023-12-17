#include<iostream>


// Recursive function to determine if the target value can be reached from the current value
bool reachValue(long long current ,long long target){

    // Check if the current value is equal to the target value
    if(current==target){
        return true; // If true, the target value is reached
    }

    // Check if the current value has exceeded the target value
    if(current> target){
        return false; // If true, the target value cannot be reached
    }
    // Try multiplying the current value by 10 or 20 and make recursive calls
    return reachValue(current*10,target)||reachValue(current*20,target);
}
int main(){
    int testCases;
    std::cin>>testCases;

    // Loop through each test case
    while(testCases--){
       long long N;
        std::cin >> N;

        // Check if the target value can be reached from the initial value (1)
        if (reachValue(1, N)) {
            std::cout << "YES\n"; // Output "YES" if true
        } else {
            std::cout << "NO\n"; // Output "NO" if false
        }
    }
    return 0;
}