#ifndef BOOK_HPP
#define BOOK_HPP
#include <iostream>
using namespace std;
class Book {
  private:
  string title;
  string author;
  int pagecount;
  bool flag;
  public:
  Book();
  Book(string title, string author, int pagec); //constructor if there is no boolean
  Book(string title, string author, int pagec, bool flag); //constructor if there is boolean
  void setName(string t);
  string getName();
  void setAuthor(string a);
  string getAuthor();  
  void setPageCount(int pc);
  int getPageCount();
  void setDigital();
  bool isDigital();
};
#endif