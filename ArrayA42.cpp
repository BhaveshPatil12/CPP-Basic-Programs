#include<iostream>
using namespace std;
int main ()
{
    int i, j, m, n, ut = 0, lt = 0, A[10][10];
    cout << "Enter number of rows and columns : ";
    cin >> m >> n;
    if (m != n)
    {
        cout << "Matrix is not a square matrix!";
        exit(0);
    }
    cout << "Enter elements of matrix : ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)	
        {
            cin >> A[i][j];
            if( j > i && A[i][j] != 0)
                ut = 1;
            if( j < i && A[i][j] != 0)
                lt = 1;
        }
    }
    if( ut == 0 || lt == 0)
        cout << "The given matrix is a triangular matrix.\n ";
    else
        cout << "The given matrix is not a triangular matrix.\n ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)	
            cout << A[i][j] << " ";
        cout << "\n ";
    }
    return 0;
}