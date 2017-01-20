#include <iostream>
using namespace std;

int* zigzag(int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        int j = i+1;
        if(j%2 != 0)
        {
            if (a[i] > a[j])
            {
                int t;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        else
        {
            if (a[i] < a[j])
            {
                int t;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    return a;
    
}

int main() {
	// your code goes here
	int a[] = {4,3,7,8,6,2,1};
	int n = sizeof(a)/sizeof(a[0]);
	int *b = zigzag(a,n);
	int i = 0;
	for(i = 0; i < n; i++)
	{
	    cout << b[i] << endl;
	}
	
	return 0;
}


