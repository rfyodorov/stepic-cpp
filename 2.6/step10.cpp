#include <iostream>
#include <stdlib.h>

using namespace std;

char *getline() {
    
    int i = 0;
    int SIZE_TMP = 1;
    int SIZE = 1;

    char * m = new char[SIZE];
    char c = '\0';

    while(cin.get(c))
    { 
        if (c == '\n') break;
	//cout << endl << "m[" << i << "] ; SIZE=" << SIZE;

        m[i] = c;
        i++;

	if (i == SIZE) {
             char * mtmp = new char[SIZE];

	     for (int j=0; j<SIZE; j++) {
	         mtmp[j] = m[j];
	     }
	     delete [] m;
	     
	     SIZE_TMP = SIZE;
	     SIZE = ++SIZE_TMP;
	     //char * 
             m = new char[SIZE];
	     //cout << " ; new char[" << SIZE << "]" ;		
	     
	     for (int j=0; j<SIZE_TMP; j++) {
	         m[j] = mtmp[j];
	     }
	     delete [] mtmp;
	}
    }
    m[i]='\0';

    return m;
}

int main()
{
    cout << endl << getline() << endl;
    return 0;
}
