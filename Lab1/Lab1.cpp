//============================================================================
// Name        : Lab1.cpp
// Author      : Stephen Weisenberger
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// classes example
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main () {
  Rectangle rect;

  Rectangle &refRect = rect;

  rect.set_values (3,4);

  Rectangle rect2 = rect;

  Rectangle *pRect = new Rectangle;

  pRect->set_values(7,8);

  rect2.set_values(5,6);
  refRect.set_values(10,5);


  cout << "area: " << rect.area() << endl;
  cout << "area2: " << rect2.area() << endl;
  cout << "pointer to rect " << pRect << endl;
  cout << "area for pointer " << pRect->area() << endl;
  return 0;
}
