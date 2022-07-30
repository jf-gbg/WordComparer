#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
    string phrase1;
    string phrase2;

    cout << "Please enter a phrase: " << '\n';
    getline(cin, phrase1);
    cout << "Please enter a second phrase: " << '\n';
    getline(cin, phrase2);

    if (phrase1.length() > phrase2.length()) {
        cout << "The first phrase was longer" << '\n';
    } else if (phrase1.length() < phrase2.length()) {
        cout << "The second phrase was longer" << '\n';
    } else if (phrase1.length() == phrase2.length()) {
        cout << "Both phrases are the same length" << '\n';
    }

    return 0;
}
