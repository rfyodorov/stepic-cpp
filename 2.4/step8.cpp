#include <iostream>
using namespace std;

int strstr(const char *str, const char *pattern) {
    // put your code here
    int str_size = 0;
    int pat_size = 0;
    int pat_cur = 0;
    int j = 0;

    signed res = -1;

    while (str[str_size]!='\0') {
         str_size=str_size++;
    } 

    cout << "string size = " << str_size << endl;

    while (pattern[pat_size]!='\0') {
         pat_size=pat_size++;
    }
    cout << "pattern size = " << pat_size << endl << endl;

    
    for (int str_cur=0; str_cur < str_size; str_cur++) {
        cout << "str_global_pos=" << str_cur << endl; 
        pat_cur = 0;
        j = str_cur;

        while ((str[j] == pattern[pat_cur]) && (str[j]!='\0')) {
            cout << "str_pos=" << j << " | " << "pat_pos=" << pat_cur << " | " << pattern[pat_cur] <<endl;
            j = j++;
            pat_cur = pat_cur++;
        }

        if (pat_cur == pat_size) {
            cout << "pos: " << str_cur << endl;
            res = str_cur;
            return res;
        }
    }
   return res;
}


int main() {
    char str1[] = "h";
    const char str2[] = "h";

    cout << strstr(str1, str2) << endl;
    return 0;
}



