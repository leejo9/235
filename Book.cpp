
#include "Book.hpp"
#include <iostream>
using namespace std;

Book::Book() { //initializes all values
  flag = false;
  pagecount=0;
  author = "";
  title = "";
}
Book::Book(string t, string a, int p, bool f){ //constructor if there is boolean
  flag = f; 
  pagecount=p;
  author = a;
  title = t;
}
Book::Book(string t, string a, int p){ //constructor if there is no boolean
  flag = false;
  pagecount=p;
  author = a;
  title = t;
}
//mutators
void Book::setAuthor(string s){
  author = s;
}
void Book::setName(string s){
  title = s;
}
void Book::setPageCount(int p){
  if(p<0) pagecount = 0;
  else pagecount = p;
}
void Book::setDigital(){
  flag = true;
}
//accessors
string Book::getName(){
  return title;
}
string Book::getAuthor(){
  return author;
}
int Book::getPageCount(){
  return pagecount;
}
bool Book::isDigital(){
  return flag;
}
int main() {
return 0;
}