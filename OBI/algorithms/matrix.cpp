#include <iostream>

using namespace std;

#define R1 3 // number of rows in Matrix-1
#define C1 3 // number of columns in Matrix-1
#define R2 3 // number of rows in Matrix-2
#define C2 3 // number of columns in Matrix-2

void mulMat(int mat1[][C1], int mat2[][C2])
{
    int rslt[R1][C2];
 
    cout << "Multiplication of given two matrices is:\n";
 
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt[i][j] = 0;
 
            for (int k = 0; k < R2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
 
            cout << rslt[i][j] << "\t";
        }
 
        cout << endl;
    }
}

int main()
{


    int a[R1][C1] = {
	{2, 4, 1},
	{2, 3, 9},
	{3, 1, 8}
    };

    int b[R2][C2] = {
	{1, 2, 3},
	{3, 6, 1},
	{2, 4, 7}
    };


    mulMat(a, b);

    return 0;
}
