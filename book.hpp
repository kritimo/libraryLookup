//
//  book.hpp
//  libraryLookup
//
//  Created by Kriti Moogala on 7/25/24.
//

#ifndef book_hpp
#define book_hpp
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    string genre;
    bool available;
    

public:
    Book(string title, string author, string isbn, string genre);
    string getTitle();
    string getAuthor();
    string getISBN();
    string getGenre();
    bool isAvailable();
    void setAvailable(bool availability);
    const void displayDetails();
};

#endif /* book_hpp */
