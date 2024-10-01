#include "softArray.hpp"
using namespace soft;

int main() {
  softArray<int> my_array = softArray<int>(10); // 10 - size
  my_array.add(10);

  my_array.print();

  return 0;
}