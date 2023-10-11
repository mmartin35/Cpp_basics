#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

typedef struct data {
    string word;
    string actual;
    int nb_try;
} data_t;

string check_letter(char letter, string word, string actual);

int main() {
    srand((time(0)));

    vector wordList = {"salut", "mec", "pd"};
    data_t data;

    cout << "Nunber of tries ?\n";
    cin >> data.nb_try;

    data.word = wordList[rand() % wordList.size()];
    data.actual = string(data.word.size(), '-');

    // Main loop
    for (int i = 0; i < data.nb_try; ++i) {
        // Check Win
        if (data.actual == data.word) {
            cout << "The word was " << data.word << "\nYou won.";
            return 0;
        }
        // Get user input
        char letter;
        cout << "Enter a letter: ";
        cin >> letter;

        // Compare strings
        string temp = data.actual;
        data.actual = check_letter(letter, data.word, data.actual);
        if (data.actual != temp)
            --i;

        cout << data.actual << "\n" << i + 1<< '/' << data.nb_try << " tries left.\n";
    }
    cout << "You lost you bozzo.\n";

    return 0;
}

string check_letter(char letter, string word, string actual) {
    for (int i = 0; i < word.length(); ++i)
        if (actual[i] == '-' && word[i] == letter)
            actual[i] = letter;
    return actual;
}
