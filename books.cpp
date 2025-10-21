#include "book.h"
#include <iostream>
using namespace std;

Book::Book() : title(""), author(""), isbn("") {

}

Book::Book(const string& title, const string& author, const string& isbn )
: title(title), author(author), isbn(isbn) {

}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

string Book::getISBN() const {
    return isbn;
}

bool Book::getAvailability() const {
    return isAvailable;
}

string Book::getBorrowerName() const {
    return borrowerName;
}

void Book::setTitle(const string& title) {
    this-> title = title;
}

void Book::setAuthor(const string& author) {
    this-> author = author;
}

void Book::setISBN(const string& isbn) {
    this-> isbn = isbn;
}

void Book::setAvailability(bool avalaible) {
    this-> isAvailable = avalaible;
}

void Book::setBorrowerName(const string& name) {
    this-> borrowerName = name;
}

void checkOut(const string& borrower) {

}
    void Book::returnBook() {

    }
    string Book::toString() const{

    }

    string Book::toFileFormat() const {

    }
    void Book::fromFileFormat(const string& line) {

    }





