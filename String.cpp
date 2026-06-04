#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Herin";
    string greeting = "Hello, ";

    string message = greeting + name + "!";
    cout << message << endl;

    cout << "Length: " << message.length() << endl;

    std::size_t pos = message.find("Herin");
    if (pos != string::npos) {
        cout << "\"Herin\" found at position " << pos << endl;
    }

    string sub = message.substr(7, 5);
    cout << "Substring: " << sub << endl;

    message.replace(7, 5, "Yash");
    cout << "Modified: " << message << endl;

    return 0;
}