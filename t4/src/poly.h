#ifndef POLY_H
#define POLY_H

#include <iostream>

class CPoly{
 public:
  
 CPoly(int w,int h) : m_width(w), m_height(h){};

  void print_area();
 private:
  
  int m_width;

  int m_height;
};

#endif
