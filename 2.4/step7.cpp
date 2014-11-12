#include <iostream>

void strcat(char *to, const char *from) {
    // put your code here
    int i =0;
    int j =0;

    while(to[i] != '\0') {
         i=i++;
    }

    while(from[j] != '\0') {
         j=j++;
    }

    for(int k=0; k<j; k++) {
        to[i] = from[k];        
        i=i++;
    }

    to[i] = '\0';

    std::cout << to << std::endl;
}


int main() {
    char str1[14] = "Hello,";
    const char str2[] = " World!";

    strcat(str1, str2);
    return 0;
}



