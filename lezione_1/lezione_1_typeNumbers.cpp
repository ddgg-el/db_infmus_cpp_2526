#include <iostream>
#include <ostream>
int main(){

    int i;
    float f;
    double d;

    std::cout << "int: " << sizeof(i) << " byte" << std::endl;
    std::cout << "float: " << sizeof(f) << " byte" << std::endl;
    std::cout << "double: " << sizeof(d) << " byte" << std::endl;

    return 0;
}