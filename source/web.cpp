//  This file is part of Empirical JOSS Demo
//  Copyright (C) Matthew Andres Moreno, 2021.
//  Released under MIT license; see LICENSE

#include "emp/web/web.hpp"

emp::web::Document doc("target");

int x = 5;
int main() {
  doc << "<h1>Hello World!</h1>";
  doc << "Original x = " << x << ".<br>";
  doc << "Current x = " << emp::web::Live(x) << ".<br>";

  // Create a button to modify x.
  emp::web::Button my_button( [](){ x+=5; doc.Redraw(); }, "Click me!" );
  doc << my_button;
}
