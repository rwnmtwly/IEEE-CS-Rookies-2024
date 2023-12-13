#include<iostream>
int main(){
    int T;
    std::cin>>T;  // Number of test cases

    for(int t = 1; t<=T; t++){
        int numberofrec;
        std::cin>>numberofrec;  // Number of rectangles for the current test case

        // Read the coordinates of the first rectangle
        int x1,y1,x2,y2;
        std::cin>>x1>>y1>>x2>>y2;

        // Initialize variables to track the maximum left, maximum top, minimum right, and minimum bottom coordinates
        int maximumleftx = x1;
        int maximumlefty = y1;
        int minimumrightx= x2;
        int minimumrighty= y2;

        // Loop to process the remaining rectangles
        for(int i = 1; i<numberofrec; i++){
            std::cin>>x1>>y1>>x2>>y2;
            maximumleftx= std::max(maximumleftx,x1);
            maximumlefty= std::max(maximumlefty,y1);
            minimumrightx= std::min(minimumrightx, x2);
            minimumrighty= std::min(minimumrighty, y2);
        }

        // Check if there is a valid common area
        if(minimumrightx>maximumleftx && minimumrighty>maximumlefty){
            // Calculate the common area
            int commonArea = (minimumrightx-maximumleftx)*(minimumrighty-maximumlefty);
            std::cout<<"Case #"<<t<<": "<<commonArea<<std::endl; 
        }
        else{
            // No common area, output 0
            std::cout<<"Case #"<<t<<": "<<"0"<<std::endl;
        }
    }
    return 0;
}