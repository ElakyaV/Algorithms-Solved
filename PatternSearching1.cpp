#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void search(char *pat, char *txt)
{

    int i = 0;
    int j = 0;
    for (i = 0; i < strlen(txt); i++)
    {
        for( j =0; j < strlen(pat); j++)
        {
           // cout << "Compare" << txt[i] << "and" << pat[j] << endl;
            if (strlen(pat)-1 == j)
            {
                 cout << "Index match at" << i-j << endl;
            }
            if (txt[i] == pat[j] && !(strlen(pat)-1 == j))
            {
             //   cout << i << endl;
                i++;
            }
            else
            {
                break;
            }
            
            //cout << "i" << i << endl;
        }
    }
}

int main() {
	// your code goes here
	char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    search(pat, txt);
    
	return 0;
}
