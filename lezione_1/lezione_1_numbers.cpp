#include <iostream>
#include <ostream>

int main()
{
    int num = 1;                // %d
    float numdec = 3.5f;        // rappresentazione a 32bit %f
    double numerodoppio = 3.5;  // rappresentazione a 64bit % da guardare

    std::cout << "inserisci un numero: ";
    std::cin >> num;

    if(std::cin.fail()){
        std::cout << "input non valido \n" << std::endl;
        return 1;
    }

    std::cout << "il numero è: " << num << std::endl;


    return 0;
}