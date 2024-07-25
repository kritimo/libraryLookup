//
//  library.cpp
//  libraryLookup
//
//  Created by Kriti Moogala on 7/25/24.
//

#include "library.hpp"
#include <iostream>

using namespace std;

void Library::addBook(string title, string author, string isbn, string genre) {
    Book newBook = Book(title, author, isbn, genre);
    books.push_back(newBook);
    std::cout << "Book added successfully!" << std::endl;
}

void const Library::displayBooks() {
    if (books.empty()) {
        cout << "No books in the library." << endl;
    } else {
        cout << "Listing all books in the library:" << endl;
        for (auto& book : books) {
            book.displayDetails();
        }
    }
}

void Library::borrowBook(std::string isbn) {
    for (auto& book : books) {
        if (book.getISBN() == isbn) {
            if (book.isAvailable()) {
                book.setAvailable(false);
                std::cout << "Book borrowed successfully!" << std::endl;
            } else {
                std::cout << "Book is currently not available." << std::endl;
            }
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not found." << std::endl;
}
