#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
    string word1, word2;

    cout << "Please enter a word: " << '\n';
    cin >> word1;
    cout << "Please enter a second word: " << '\n';
    cin >> word2;

    if (word1.length() > word2.length()) {
        cout << "The first word was longer" << '\n';
    } else if (word1.length() < word2.length()) {
        cout << "The second word was longer" << '\n';
    } else if (word1.length() == word2.length()) {
        cout << "Both words are the same length" << '\n';
    }

    return 0;
}
