/*
NAME: Aron Kipkoech Langat
REG No: CT101/G/26629/25
GROUP B: BSc Computer Science
*/
#include <iostream>
#include <string>
using namespace std;

class Book {
    string title, author;
    int copies;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter number of copies: ";
        cin >> copies;
    }

    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed successfully!\n";
        } else {
            cout << "No copies available!\n";
        }
    }

    void displayDetails() {
        cout << "=============================\n";
        cout << "--- Book Details ---\n";
        cout << "=============================\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies available: " << copies << endl;
        cout << "=============================\n";
    }
};

int main() {
    Book b;

    b.inputDetails();
    b.displayDetails();

    b.borrowBook();

    b.displayDetails();

    return 0;
}