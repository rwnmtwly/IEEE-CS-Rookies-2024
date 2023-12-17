#include<iostream>
const int MAX_ROWS = 10;
const int MAX_COLUMNS = 10;

// Function to calculate the maximum path sum using recursion
int maximumPathSum(int r, int c,int matrix[][10],int i , int j){


    // Base case: if we reach the bottom-right cell
    if(i==r-1 && j == c-1){
        return matrix[i][j];
    }


    // Variables to store the maximum path sum going down and going right
    int downSum = INT_MIN;
    int rightSum = INT_MIN;


    // Check if we can go down
    if(i<r-1){
        downSum = maximumPathSum(r,c,matrix,i+1,j);
    }


    // Check if we can go right
    if(j<c-1){
        rightSum = maximumPathSum(r,c,matrix,i,j+1);
    }

    // Return the maximum of the two possible moves plus the current cell's value
    return matrix [i][j]+ std::max(downSum,rightSum);
}
int main(){
    int rows,columns;


    // Input the number of rows and columns
    std::cin>>rows>>columns;
    int matrix[MAX_ROWS][MAX_COLUMNS];

    // Input matrix A
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cin>>matrix[i][j];
        }
    }

    // Calculate and print the maximum path sum
    int x = maximumPathSum(rows,columns,matrix,0,0);
    std::cout<<x<<"\n";
    return 0;
}