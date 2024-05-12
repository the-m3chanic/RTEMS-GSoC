#include <numeric>
#include <iostream>
#include <vector>
int main() {
  auto v = std::vector<int>(5);
  std::iota(std::begin(v), std::end(v), 0);
  for (auto i : v) {
    std::cout << i << std::endl;
  }
  return 0;
}