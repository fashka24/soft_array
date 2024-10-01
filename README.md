# softArray
1. Dynamic array with static part.
2. Ez print.
3. Ez development

## Get start
### main.cpp:
    #include "softArray.hpp"
    using namespace soft;

    int main() {
      softArray<int> my_array = softArray(10); // 10 - size
      my_array.add(10);
    
      my_array.print();

      return 0;
    }