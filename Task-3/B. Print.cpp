#include<iostream>
void printNumbers(int x){
    for (int i = 1; i<= x; i++){
        std::cout<<i;
        //this code is to prevent printing a space after the last number
        if (i < x) {
            std::cout << " ";
        }
    }
}
int main(){
    int n;
    std::cin>>n;
    //calling the function we created
    printNumbers(n);
    return 0;
}
