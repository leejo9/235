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
  Book(string title, string author, int pagec);
  Book(string title, string author, int pagec, bool flag);
  void setTitle(string t);
  string getTitle();
  void setAuthor(string a);
  string getAuthor();  
  void setPageCount(int pc);
  int getPageCount();
  void setDigital();
  bool isDigital();
};
#endif