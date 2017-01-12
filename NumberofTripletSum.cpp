#include <iostream>
using namespace std;

int triplets(int a[5], int count, int n)
{
    int sum1, sum, j, k, i, triplets;
    triplets = 0;
    for (int i=0;i<n;i++)
    {
      //cout << i << endl;
      j = i+1;
     // cout << j << endl;
      k = i+2;
     // cout << k << endl;
      sum1 = a[i] + a[j];
      sum = sum1 + a[k];
      while((sum < count) && (k < n))
      {
          triplets++;
          cout << a[i] << "" << a[j] << "" << a[k] << endl;
          k++;
          sum = sum1 + a[k];
      }
    }
	// your code goes here
	return triplets;
}

int main() {
    int a[5] = {5,1,3,4,7};
    int n = sizeof(a)/sizeof(a[0]);
    //cout << n <<endl;
    int ret = triplets(a,12,n);
    cout << ret << endl;
	// your code goes here
	return 0;
}
