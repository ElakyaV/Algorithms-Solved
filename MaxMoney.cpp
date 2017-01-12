#include <iostream>
using namespace std;

int maxMoney(int n, int k)
{
    int sum = 0;
    int min = 1;
    for(int i=1;i<=n;i++)
    {
        sum += i;
        if (sum == k)
        {
            if (min == k)
            {
                sum-=i;
            }
            else
            {
                sum-=min;
            }
        }
    }
    return sum;
}

int main() {
	// your code goes here
	int n = 5;
	int k = 6;
	int max = maxMoney(n,k);
	cout << max << endl;
	return 0;
}
