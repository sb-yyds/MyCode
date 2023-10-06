#include <iostream>

#include "lib/mrrand.h"

using namespace std;

int main() {
  cout << rd(10000) + 1 << ' ' << rd(100000) + 1;
  return 0;
}