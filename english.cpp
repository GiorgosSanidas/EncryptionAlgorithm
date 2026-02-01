#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string english(const string& input) {
    static unordered_map<char, char> dict = {
        // Φωνήεντα
        {'a','2'}, {'A','2'}, {'2','a'},
        {'e','4'}, {'E','4'}, {'4','e'},
        {'i','6'}, {'I','6'}, {'6','i'},
        {'o','8'}, {'O','8'}, {'8','o'},
        {'u','0'}, {'U','0'}, {'0','u'},

        // Μονά ψηφία
        {'1','9'}, {'9','1'},
        {'3','7'}, {'7','3'},
        {'5','n'}, {'n','5'}, {'N','5'},

        // Σύμφωνα
        {'b','z'}, {'B','Z'}, {'z','b'}, {'Z','B'},
        {'c','y'}, {'C','Y'}, {'y','c'}, {'Y','C'},
        {'d','x'}, {'D','X'}, {'x','d'}, {'X','D'},
        {'f','w'}, {'F','W'}, {'w','f'}, {'W','F'},
        {'g','v'}, {'G','V'}, {'v','g'}, {'V','G'},
        {'h','t'}, {'H','T'}, {'t','h'}, {'T','H'},
        {'j','s'}, {'J','S'}, {'s','j'}, {'S','J'},
        {'k','r'}, {'K','R'}, {'r','k'}, {'R','K'},
        {'l','q'}, {'L','Q'}, {'q','l'}, {'Q','L'},
        {'m','p'}, {'M','P'}, {'p','m'}, {'P','M'}
        // n <-> 5 το έχουμε ήδη
    };

    string output;
    output.reserve(input.size());

    for (char c : input) {
        auto it = dict.find(c);
        if (it != dict.end()) {
            output += it->second;
        } else {
            output += c;
        }
    }
    return output;
}


/*
ANTIKATASTASH TON 5 AGGLIKON FONIENTON ME THN SEIRA ME TOUS ZIGOUS ARITHMOUS (2-4-6-8-0)

ANTIKATASTASH TON 21 AGGLIKON SIMFONON :
- Yparxoun 21 symfona.
- To 1 apo tin arxi tha antistoixizetai me to 1 apo to telos,
  to 2 apo tin arxi me to 2 apo to telos, κ.ο.κ.
- To gramma "N,n" einai to mesaio symfono,
  opote antistoixizetai me to noumero 5 (pou einai kai o mesos arithmos sto dekadiko systima).

GIA TOUS MONOUS ARITHMOUS (1,3,5,7,9):
- To 5 antistoixizetai me to "n".
- Ta ypoloipa akolouthoun tin idia logiki opws sta symfona:
  1 ↔ 9
  3 ↔ 7
*/
