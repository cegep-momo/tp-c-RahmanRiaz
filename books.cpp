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

void Book::checkOut(const string& borrower) {
    if (isAvailable) {
        borrowerName = borrower;
        isAvailable = false;
    }
}

void Book::returnBook() {
    if (isAvailable == false) {
        borrowerName = "";
        isAvailable = true;
    }
}

    
string Book::toString() const{

    return "Titre " + title + ", Auteur " + author + ", ISBN" + isbn;
}

string Book::toFileFormat() const {
    return title + "|" + author + "|" + isbn + "|" +
           (isAvailable ? "1" : "0") + "|" + borrowerName + "|";
}

void Book::fromFileFormat(const string& line) {
    size_t separateur1 = line.find('|');
    size_t separateur2 = line.find('|', separateur1 + 1);
    size_t separateur3 = line.find('|', separateur2 + 1);
    size_t separateur4 = line.find('|', separateur3 + 1);
    size_t separateur5 = line.find('|', separateur4 + 1);

    title = line.substr(0, separateur1);
    author = line.substr(separateur1 + 1, separateur2 - separateur1 - 1);
    isbn = line.substr(separateur2 + 1, separateur3 - separateur2 - 1);
    string disponibiliteStr = line.substr(separateur3 + 1, separateur4 - separateur3 - 1);
    isAvailable = (disponibiliteStr == "1");
    borrowerName = line.substr(separateur4 + 1, separateur5 - separateur4 - 1);
}






