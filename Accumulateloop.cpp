//ACCUMULATING TOTALS IN LOOP
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> books = {
        "Harry Potter and the Deathly Hallows 50",
        "The Dangerous Book for Boys 70",
        "Marley and Me 60",
        "Fahrenheit 451 80",
        "The Tipping Point 89",
        "A Thousand Splendid Suns 98"
    };

    vector<int> prices = {50, 70, 60, 80, 89, 98};

    int totalAmount = 0;
    vector<string> purchasedBooks;

    cout << "Available Books:" << endl;

    for (size_t i = 0; i < books.size(); ++i) {
        cout << i + 1 << ". " << books[i] << " = " << prices[i] << endl;
    }

    while (true) {
        cout << "Press the number of the book you want to buy or 0 to finish: ";

        int choice;
        cin >> choice;

        if (choice == 0) {
            break;
        } else if (choice >= 1 && choice <= static_cast<int>(books.size())) {
            totalAmount += prices[choice - 1];
            purchasedBooks.push_back(books[choice - 1]);
            cout << books[choice - 1] << " added to your cart." << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    cout << "\nYour Purchased Books:" << endl;

    for (const string& book : purchasedBooks) {
        cout << "- " << book << endl;
    }
    
    cout << "Total amount of your purchase: " << totalAmount << endl;

    return 0;
}
