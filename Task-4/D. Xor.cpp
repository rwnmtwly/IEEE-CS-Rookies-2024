    #include<iostream>

    // Function to calculate the Qth element based on the given formula
    long long F(long long A, long long B, long long Q){
        if(Q%3 == 1){
            // If Q is 1, return A
            return A;
        }
        else if(Q%3 == 2){
            // If Q is 2, return B
            return B;
        }
        else{
            // If Q is a multiple of 3, return the XOR of A and B
            return (A^B);
        }
    }
    int main(){
        
        long long a,b,q;

        // Input values for A, B, and Q
        std::cin>>a>>b>>q;

        // Check if Q is non-positive, return 0 as there's no valid computation
        if(q<=0){
            return 0;
        }
        
        // Output the result of the function F
       std::cout<<F(a,b,q);
        return 0;
    }   