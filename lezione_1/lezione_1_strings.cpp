#include <cstdio>
#include <iostream>
#include <ostream>
using namespace std;

int main()
{
	char carattere = 'T';
	// std::string
	string stringa;
	char * altrastringa = "ciao";

	stringa = "ailwbevlauiwhefliahwelifuhalweifhiulawh";
	printf("la stringa è %s", altrastringa);
	printf("Il carattere che ho scelto è %c\n", carattere);
	printf("la stringa è : %s", stringa.c_str());
	
	// std::cout << "Fatta!" << std::endl;
	cout << "Fatta !" << endl;
	cout << "la stringa è: " << stringa << endl;
	
	// input da terminale
	//std::cin
	string nome;
	cin >> nome;
	cout << "il mio nome è: " << nome << endl;

	return 0;
}
