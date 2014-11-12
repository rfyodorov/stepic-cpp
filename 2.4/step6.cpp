#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>


int main() {
    std::string s("фыва");
    std::cout << s << std::endl;
    std::reverse(std::begin(s), std::end(s));
    std::cout << s << std::endl;
}
