#include <iostream>
using namespace std;

int search(int mat[][4], int n, int k)
{
   int i = 0;
   while (i < n)
   {
       if (mat[i][n-1] == k)
       {
           cout << "Index found : " << i+1 << " " << n;
           return 1;
       }
       else if(mat[i][n-1] > k)
       {
           n = n-1;
       }
       else if(mat[i][n-1] < k)
       {
           i++;
       }
   }
   cout << "Index not found";
   return 0;
}

int main() {
	// your code goes here
	int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  int found = search(mat, 4, 30);
  return 0;
}
