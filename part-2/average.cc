// Martin Nguyen
// martinnguyen34@csu.fullerton.edu
// @martini-i
// Partners: @Osvaldo303

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double sum{0.0};
  for (int i = 1; i < argc; ++i) {
    double num{std::stod(arguments[i])};
    sum += num;
  }
  double average{sum / (argc - 1)};
  std::cout << "average = " << average << std::endl;
  return 0;
}
