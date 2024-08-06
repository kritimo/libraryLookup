## Library Book Catalog 📗

**Tech Used: C++, Object oriented programming**
<br><br>This C++ project implements a simple library management system. It allows users to add, display, and borrow books.

### How It Works

**Library Class:**
This class manages a collection of books and provides functionality to add, display, and borrow books.

**Book Class:**
This class contains methods like getISBN, isAvailable, setAvailable, and displayDetails.
These methods are used to access and modify book details and check availability status.

**Adding Books:**
The addBook() function takes a book's title, author, and ISBN as parameters and adds a new Book object to the library's collection.
The book is appended to a vector of books, and a success message is displayed.

**Borrowing Books:**
The borrowBook() function allows a user to borrow a book by providing its ISBN.
It searches through the collection for a book with the matching ISBN.
If the book is available, it marks the book as not available and confirms the borrowing action.
If the book is not available or not found, it prints an appropriate message.
