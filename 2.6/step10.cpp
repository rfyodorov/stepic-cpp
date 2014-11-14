#include <iostream>
#include <cstdlib>

using namespace std;

char getline(char *str);
int rrand(int range_min, int range_max);

int main() {

    char str[] = "test";
    //cout << getline(str) << endl;
    getline(str);

    return 1;
}

int rrand(int range_min, int range_max) {
    return rand() % (range_max - range_min + 1) + range_min;
}

char getline(char *str) {
    // -----
    int * m = new int[1000];

    for (unsigned int j = 0; j < 1000; j++) {
        m[j] = rrand(100, 200);
    }

    int i = 0;
    while(i<20) {
         cout << &m[i] << " - " << m[i] << endl;
         i++;
    }
    delete [] m;

    // ----
    
    char c = '\0';

    char * message = new char[10]; // 2 byte * 10 =  20 byte

    i = 0;
    while(i<5) {
	 cin.get(); // >> message[i];
        // cout << "-" << endl;
	 //*message;// << " - " << (char)message[i] << endl;
         i++;
    }

   /* while (cin.get(c)) {
        message[i] = char cin.get(c);
	i++;
    }*/

//  cout << message[0] << endl;

    delete [] message;

    return *str;

}

