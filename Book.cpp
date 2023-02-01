
#include "Book.hpp"
#include <iostream>
using namespace std;

Book::Book() { 
  flag = false;
  pagecount=0;
  author = "";
  title = "";
}
Book::Book(string t, string a, int p, bool f){
  flag = f;
  pagecount=p;
  author = a;
  title = t;
}
Book::Book(string t, string a, int p){
  flag = false;
  pagecount=p;
  author = a;
  title = t;
}
void Book::setAuthor(string s){
  author = s;
}
string Book::getAuthor(){
  return author;
}
void Book::setTitle(string s){
  title = s;
}
string Book::getTitle(){
  return title;
}
void Book::setPageCount(int p){
  if(p<0) pagecount = 0;
  else pagecount = p;
}
int Book::getPageCount(){
  return pagecount;
}
void Book::setDigital(){
  flag = true;
}
bool Book::isDigital(){
  return flag;
}
int main() {
    std::cout << "TEST 1: TEST DEFAULT CONSTRUCTOR & ACCESSORS" << std::endl;

    // Test default constructor
    Book my_book;

    // Test accessor functions
    std::cout << my_book.getTitle() << std::endl;
    std::cout << my_book.getAuthor() << std::endl;
    std::cout << my_book.getPageCount() << std::endl;
    std::cout << my_book.isDigital() << std::endl;


    std::cout << "\nTEST 2: TEST PARAMETERIZED CONSTRUCTOR & ACCESSORS" << std::endl;

    // Test parameterized constructor
    Book my_book1("Harry Potter and the Chamber of Secrets", "J.K Rowling", 253, 1);
    Book my_book2("Moby Dick", "Herman Melville", 378);
    
    // Test accessor functions
    std::cout << my_book1.getTitle() << " By " << my_book1.getAuthor() 
        << " with page count " << my_book1.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book1.isDigital() << std::endl;

    std::cout << my_book2.getTitle() << " By " << my_book2.getAuthor() 
        << " with page count " << my_book2.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book2.isDigital() << std::endl;

    
    std::cout << "\nTEST 3: TEST MUTATOR FUNCTIONS" << std::endl;

    // Test mutator functions
    Book my_book3("Moby Dick", "Herman Melville", 378);
    my_book3.setTitle("50 shades of gray");
    my_book3.setAuthor("E. L. James");
    my_book3.setPageCount(514);
    my_book3.setPageCount(-10);
    my_book3.setDigital();

    // Test accessor functions
    std::cout << my_book3.getTitle() << " By " << my_book3.getAuthor() 
        << " with page count " << my_book3.getPageCount() << std::endl;
    std::cout << "Digital: " << my_book3.isDigital() << std::endl;
}