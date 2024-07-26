//
//  main.cpp
//  libraryLookup
//
//  Created by Kriti Moogala on 7/25/24.
//

#include <iostream>
#include "library.hpp"

int main(int argc, const char * argv[]) {
    
    Library library;
    
    //add example books
    library.addBook("The Catcher in the Rye", "J.D. Salinger", "9780316769488", "historical fiction");
    library.addBook("To Kill a Mockingbird", "Harper Lee", "9780061120084", "historical fiction");
    library.addBook("Cracking the Coding Interview", "Gayle McDowell", "9780984782857", "textbook");
    library.addBook("And Then There Were None", "Agatha Christie", "9780062073488", "mystery");
    
    int choice = 0;
    
    do {
            std::cout << "Library Management System Menu:" << std::endl;
            std::cout << "1. Display all books" << std::endl;
            std::cout << "2. Add a new book" << std::endl;
            std::cout << "3. Borrow a book" << std::endl;
            std::cout << "4. Exit" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;

        switch (choice) {
            case 1:{
                library.displayBooks();
                break;
            }
            case 2:{
                std::string title, author, isbn, genre;
                std::cout << "Enter book title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                std::cout << "Enter author: ";
                std::getline(std::cin, author);
                std::cout << "Enter ISBN: ";
                std::cin >> isbn;
                std::cout << "Enter genre: ";
                std::cin >> genre;
                
                library.addBook(title, author, isbn, genre);
                break;
            }
            case 3:{
                std::string isbn;
                std::cout << "Enter ISBN of the book to borrow: ";
                std::cin >> isbn;
                library.borrowBook(isbn);
                break;
            }
            case 4:{
                std::cout << "Exiting program. Goodbye!" << std::endl;
                break;
            }
            default:{
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
                
            }
                
        }
            std::cout << std::endl;

        } while (choice != 4);

        return 0;
    
    
}
