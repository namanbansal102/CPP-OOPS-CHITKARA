#include <iostream>
#include <string>

using namespace std;

void display(string str) {
    cout << str << endl;
}

void display(string str1, string str2) {
    cout << str1 << "-" << str2 << endl;
}

int main() {
    int choice;
    cin >> choice;
    string str1, str2;

    cin >> str1;
    if (choice == 2) {
        cin >> str2;
    }

    if (choice == 1) {
        display(str1);
    } else if (choice == 2) {
        display(str1, str2);
    }

    return 0;
}