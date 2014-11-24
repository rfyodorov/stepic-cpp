#include <iostream>
#include <stdlib.h>

using namespace std;

char *getline() {
    
    int i = 0;
    int mc_tmp = 2;
    int mc = 2;
    char * m = new char[mc];

    char c = '\0';

    while(cin.get(c))
    { 
        if (c == '\n') break;

        m[i] = c;
        i++;
   
	cout << endl << "i=" << i << " ; mc =" << mc;

	if (i == mc) {
             char * mtmp = new char[mc];

	     for (int j=0; j<mc; j++) {
	         mtmp[j] = m[j];
	     }
	    
	     delete [] m;
	     mc_tmp = mc;
	     mc = mc * 2;
	     char * m = new char[mc];
	     
	     for (int j=0; j<mc_tmp; j++) {
	         m[j] = mtmp[j];
	     }

	     delete mtmp;
	}
    }

//    cout << i << ":" << m << endl;

//   cout << endl << "i=" << i << " ; sizeof array =" << sizeof(m) << " ; sizeof/array="<< sizeof(m)/sizeof(m[0]) << endl;
//    m[i] = '\n';
//    cout << m << endl;
//    delete [] m;
    return m;
}

int main()
{
    cout << getline() << endl;
    return 0;
}
