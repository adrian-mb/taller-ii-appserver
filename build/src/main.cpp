#include <iostream>
#include <cstdlib>

int main() {
  std::cout << std::getenv("APPSERVER_CFG") << std::endl;
}
