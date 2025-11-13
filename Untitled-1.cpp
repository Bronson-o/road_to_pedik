#include <iostream>
using namespace std;

//запитати про прототипи!

void computeofspaces(int count){
    for (int i = 0; i < count; ++i) {
        cout << "space" << endl;        
    }
}

main(){
    char symbols[100];
    cout << "Enter text: ";
    cin.getline(symbols, 100);
    int spacesCount = 0;
    for (int i = 0; i < 100; ++i) {
        if (symbols[i] == ' ')
        {
            spacesCount += 1;
        }
        
    }


    cout << "Your text " << symbols << endl;
    cout << "Amount of spaces - " << spacesCount << endl;
    computeofspaces(spacesCount);
}
