#include <iostream>

unsigned int strlen(const char *str) {
    // put your code here
    int counter=0;

    while(*str!='\0') {
        str++;
        counter++;
    }

//    while(str[counter]!='\0') {
//        counter = counter++;
//    }

    return counter;
}


int main() {
	const char str[] = "hello!";
	std::cout << strlen(str) << std::endl;
	return 0;
}
