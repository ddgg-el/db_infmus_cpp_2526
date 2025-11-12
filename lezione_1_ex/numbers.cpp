#include <iostream>

using namespace std;

int main(){

    int num;
    while(true){
        
        cin >> num;
        if(cin.fail()){
            cout << "inserisci un numero!" << endl;
            cin.clear();
            cin.ignore();
            continue;
        }
        
        cout << "numero = " << num << endl;
        break;
    }
    return 0;
}