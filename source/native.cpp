//  This file is part of Empirical JOSS Demo
//  Copyright (C) Matthew Andres Moreno, 2021.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "base/vector.h"
#include "config/command_line.h"

#include "empirical-joss-demo/example.hpp"

// This is the main function for the NATIVE version of Empirical JOSS Demo.

int main(int argc, char* argv[])
{
  emp::vector<std::string> args = emp::cl::args_to_strings(argc, argv);

  std::cout << "Hello, world!" << std::endl;

  return example();
}
