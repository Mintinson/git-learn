#include <iostream>
#include <vector>

int main() {
  std::vector<double> ddouv{3.2, 7.6, 5.2, 1.1};
  for (auto v = ddouv.cbegin(); v != ddouv.cend(); ++v) {
    std::cout << *v << std::endl;
    }
    }
