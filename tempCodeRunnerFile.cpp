#include <iostream>
#include <string>
#include "english.h"

using namespace std;

int main() {
    string input;
    string output;

    cout << "Give the text you want to encrypt/decrypt: ";
    getline(cin, input);   // Διαβάζει όλη τη γραμμή (και κενά)

    output = english(input);

    cout << "Result: " << output << endl;

    return 0;
}
