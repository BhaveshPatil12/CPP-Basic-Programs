#include<iostream>
void printTriangular(int arr[][3], int sizeX, int sizeY)
{
    std::cout << "Upper-triangular matrix " << std::endl;
    for (int i = 0; i < sizeY; i++)
    {
       for (int j = 0; j < (sizeX - i); j++)
       {
           std::cout << arr[i][j] << "  ";
       }
       std::cout << "\n";
    }
}
 
int main()
{
    int arr[3][3] = { 
    	{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printTriangular(arr, 3, 3);
}