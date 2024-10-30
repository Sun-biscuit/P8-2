#include <iostream>
#include <string>

using namespace std;

int countWords(string);

int main() {

    string strng;
    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, strng);
        if (strng == "Q")break;
        cout << "Word count: " << countWords(strng) << endl;
    }





}

int countWords(string str) {
    int wordCount = 0;
    bool wordCharacter = false;

    for (int i = 0; i < str.length(); i++) {
        char character = str[i];
        if (character == ' ') {
            wordCharacter = false;
        }
        else if (!wordCharacter) {
            wordCharacter = true;
            ++wordCount;
        }
    }
    return wordCount;
}