#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void maxsubarray(int a[], int n)
{
    int startindex, endindex, maxsum = 0, totalsum = 0, startindextemp = 0, maxinnegative = INT_MIN;
    for (int i=0; i<n;i++)
    {
        totalsum += a[i];
        if (totalsum > maxsum)
        {
           // cout << maxsum << endl;
            maxsum = totalsum;
            if (startindextemp >= n)
            {
                startindex = -1;
            }
            else
            {
            startindex = startindextemp;
            }
            endindex = i;
            /*if (startindex == n)
            {
                endindex = -1;
            }
            else
            {
                endindex = i;
            }*/
            
        }
        if (totalsum < 0)
        {
            if (maxinnegative < totalsum)
            {
                maxinnegative = totalsum;
                startindex = i;
                endindex = i;
            }
            totalsum = 0;
            startindextemp = i+1;
        }
    }
    if (totalsum == 0)
    {
        maxsum = maxinnegative;
    }
    cout << "Startindex: " << startindex << endl;
    cout << "Endindex: " << endindex << endl;
    cout << maxsum;
}
int main() {
	// your code goes here
//	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int a[] = {-5,-2,-5,-2,-3};
	int n = sizeof(a)/sizeof(a[0]);
	cout << n << endl;
	if (n==0)
	{
	    cout << "No element";
	}
	else
	{
	maxsubarray(a,n);
	}
	return 0;
}
