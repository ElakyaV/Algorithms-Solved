#include <iostream>
using namespace std;

void FindRotatedTimes(int a[], int n)
{
    //cout<<n;
    int i = 0;
    int j = i+1;
    int r = 0;
    while (a[i] < a[j])
    {
       i = j;
       j = j+1;
    }
    r = n - i -1;
    cout << r;
    
}
int main() {
    
	// your code goes here
	int a[] = {5,6,1,2,3,4};
	int n = sizeof(a)/sizeof(a[0]);
	FindRotatedTimes(a, n);
	return 0;
}
