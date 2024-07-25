//
//  book.cpp
//  libraryLookup
//
//  Created by Kriti Moogala on 7/25/24.
//

#include "book.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Book::Book(std::string title, std::string author, std::string isbn, std::string genre)
    : title(title), author(author), isbn(isbn), genre(genre), available(true) {}

string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }
string Book::getISBN() { return isbn; }
string Book::getGenre() { return genre;}
bool Book::isAvailable() { return available; }

void Book::setAvailable(bool availability) {
    available = availability;
}

void Book::displayDetails() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Available: " << (available ? "Yes" : "No") << endl;
    cout << endl;
}

