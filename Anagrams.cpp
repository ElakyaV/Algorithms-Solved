#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int isAnagram(char *a, char *ana)
{
    cout << a << endl;
    cout << ana << endl;
    int len_a = strlen(a);
    int len_ana = strlen(ana);
    //cout << strlen(a) << endl;
   // cout << strlen(ana) << endl;
    
    if (len_a == len_ana)
    {
        int count_a[256] = {0};
        int count_ana[256] = {0};
        for (int j=0;j<len_a;j++)
        {
            count_a[a[j]]++;
            count_ana[ana[j]]++;
        }
        for (int k=0;k<256;k++)
        {
            if (count_a[k] == count_ana[k])
            {
                
            }
            else
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

int main() {
	// your code goes here
//	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
//	int a[] = {-5,-2,-5,-2,-3};
	char *a[] = {"cat", "act", "dog", "god"};
	int n = sizeof(a)/sizeof(a[0]);
	cout << n << endl;
	//string b[] = {"cat", "act", "dog", "god"};
//	cout << b[0][0];
	//cout << a[0];
	char ana[] = "tac";
	int res;
	for (int i = 0; i< n; i++)
	{
	   res = isAnagram(a[i], ana);
	  // cout << res << endl;
	   if (res)
	   {
	       cout << "this is anagram" << endl;
	   }
	   else
	   {
	       cout << "Not an anagram" << endl;
	   }
	}
	
	
	return 0;
}
