#include <iostream>
using namespace std;

void searchRotatedArray(int a[], int n, int key)
{
    int mid = n/2;
    if (a[0] <= key)
    {
        if(a[0] == key)
        {
            cout << "0";
        }
        else
        {
            if(a[mid] <= key)
            {
                if(a[mid] == key)
                {
                    cout << mid;
                }
                else
                {
                    if(a[n-1] <= key)
                    {
                        if(a[n-1] == key)
                        {
                            cout << n-1;
                        }
                        else
                        {
                            for(int i = 1; i < mid-1;i++)
                            {
                                if(a[i] == key)
                                {
                                    cout << i;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                for(int i =0; i<mid; i++)
                {
                    if(a[i] == key)
                    {
                        cout << i;
                    }
                }
            }
        }
    }
    else
    {
        if(a[mid] >= key)
            {
                if(a[mid] == key)
                {
                    cout << mid;
                }
                else
                {
                    if(a[n-1] >= key)
                    {
                        if(a[n-1] == key)
                        {
                            cout << n-1;
                        }
                        else
                        {
                            for(int i = mid+1; i < n;i++)
                            {
                                if(a[i] == key)
                                {
                                    cout << i;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                for(int i =mid+1; i<n; i++)
                {
                    if(a[i] == key)
                    {
                        cout << i;
                    }
                }
            }
        
    }
}

int main() {
	// your code goes here
	int a[] = {6,7,1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	int key = 7;
	searchRotatedArray(a,n, key);
	return 0;
}
