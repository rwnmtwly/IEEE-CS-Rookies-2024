#include<iostream>
#include <valarray>
int main(){

    // Input for coordinates of the first circle
    double x1, y1, x2, y2;
    std::cin>>x1>>y1>> x2>> y2;

    // Input for coordinates of the second circle
    double x3,y3,x4,y4;
    std::cin>>x3>>y3>>x4>>y4;

    // Calculate the center coordinates of each circle
    double center1x,center1y,center2x,center2y;
    center1x = (x1+x2)/2.0;
    center1y = (y1+y2)/2.0;
    center2x = (x3+x4)/2.0;
    center2y = (y3+y4)/2.0;

    // Calculate the diameter of each circle
    double diameter1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    double diameter2 = sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));

    // Calculate the radius of each circle
    double radius1 = diameter1/2;
    double radius2 = diameter2/2;

    // Calculate the distance between the centers of the two circles
    double d = sqrt((center1x - center2x) * (center1x - center2x)+ (center1y - center2y) * (center1y - center2y));
    
    // Check for intersection based on the conditions
    if(d<=radius1-radius2||d<=radius2-radius1||d<radius1+radius2||d==radius1+radius2){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
    return 0;
}