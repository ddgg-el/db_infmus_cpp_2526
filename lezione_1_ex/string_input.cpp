#include <cctype>
#include <iostream>

using  namespace std;

int main() {

    string input;

    // ciclo infinto finchè non si interrompe
    while(true) {

        // richiesta all'utente, salvataggio nella variabile 'string input'
        cout << "Scrivi il tuo nome: ";
        cin >> input;

        // verifichiamo che la stringa non sia vuota
        if(input.empty()) {
            cout << "Devi scrivere il tuo nome...\n";
            continue;
        }

        // verifichiamo che la stringa non contenga numeri
        bool soloNumeri = false;
        for (char c : input){
            if(isdigit(c)){
                soloNumeri = true;
                continue;
            }
            continue;
        }
        
        if(soloNumeri){
            cout << "Scrivi solo testo...\n";
            continue;
        }

        // superati i controlli si interrompe il while, altrimenti continua il loop infinito
        break;
    }

    cout << "Il tuo nome è: " << input << "\n";
    return  0;

}