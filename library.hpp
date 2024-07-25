//
//  library.hpp
//  libraryLookup
//
//  Created by Kriti Moogala on 7/25/24.
//

#ifndef library_hpp
#define library_hpp

#include <stdio.h>
#include <vector>
#include "book.hpp"

using namespace std;

class Library {
private:
    vector<Book> books;

public:
    void addBook(string title, string author, string isbn, string genre);
    void const displayBooks();
    void borrowBook(string isbn);
};

#endif /* library_hpp */
