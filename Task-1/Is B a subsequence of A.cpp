#include<iostream>

int main(){
    int n,m;
    std::cin>>n>>m;     //user inputs the sizes of the two arrays
    int a[n],b[m];
    //entering the elements of the first array
    for(int i = 0; i < n;i++){
        std::cin>>a[i];
    }
    //entering the elements of the second array(possible subsequence)
    for(int i = 0; i < m;i++){
        std::cin>>b[i];
    }
    //subsequence can't have more elements than the main array
    //(only less than or equal to it)
    if(m>n){
        std::cout<<"NO"<<"\n";
        return 0;
    }
    //defining a counter variable
    int count = 0;
    //loop interating the "main" array
    for(int i =0; i < n; i++){
        //loop iterating the "possible" subsequence
        for(int j = 0; j < m; j++){
            if(a[i]==b[j]){
                count++;
            }
        }
    }
    //if b is a subsequence counter will increment m numbers of times 
    //since all elements of b exist in a
    if(count==m){
        std::cout<<"YES"<<"\n";
    }
    else{
        std:: cout<<"NO"<<"\n";
    }

    return 0;
}