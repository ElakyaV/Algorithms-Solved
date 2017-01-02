#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void computeLPSArray(char *pat, int M, int *lps)
{
    int len = 0;
    lps[0] = 0; 
 
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else 
        {
            if (len != 0)
            {
                len = lps[len-1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    
}

void search(char *pat, char *txt)
{
    int M = strlen(pat);
    int lps[M];
    computeLPSArray(pat, M, lps);
    int i = 0;
    int j = 0;
    while(i < strlen(txt))
    {
           // cout << "Compare" << txt[i] << "and" << pat[j] << endl;
        if (strlen(pat) == j)
        {
                 cout << "Index match at" << i-j << endl;
                 j = lps[j-1];
                 //cout<<j<<endl;
        }
        if (txt[i] == pat[j])
        {
             //   cout << i << endl;
                i++;
                j++;
        }
        else
        {
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
            
            //cout << "i" << i << endl;
   }
}


int main() {
	// your code goes here
	char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    //int lps[4] = {0, 1, 2, 3};
    search(pat, txt);
    
    
	return 0;
}
