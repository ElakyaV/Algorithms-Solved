#include <iostream>
using namespace std;

int RotateArray(int a[4][4])
{
    int n = 4;
    for (int i = 0; i < n/2; i++)
    {
        for(int j=i; j < n-i-1; j++)
        {
            int t = a[i][j];
            a[i][j] = a[n-1-j][i];
            a[n-1-j][i] = a[n-i-1][n-1-j];
            a[n-i-1][n-1-j] = a[j][n-i-1];
            a[j][n-i-1] = t;
        }
    }
    
    for (int i =0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

int main() {
	// your code goes here
//	int a[3][3] = {{1, 2, 3},
  //            {4, 5, 6},
    //          {7, 8, 9}};
    
    int a[4][4] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
              
    RotateArray(a);
	return 0;
}
