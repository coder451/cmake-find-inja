#include "inja/inja.hpp"
#include <cstdio>
#include <string>
using namespace inja;
int main(int argc, char* argv[]) {
  json data;
  data["name"] = "world";

  // Returns std::string "Hello world!"
  std::string w = render("Hello {{ name }}!", data);
  std::cout << "From rendered string: " << w << std::endl;

  // Writes "Hello world!" to stream
  render_to(std::cout, "Using render_to: Hello {{ name }}!", data);

  return 0;
}