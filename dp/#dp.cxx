#include <iostream>

using namespace std;

int h = 7, m = 50, s, v;

int main() {
  cin >> s >> v;
  while (s > 0) {
    m -= 1;
    s -= v;
    if (m < 0) {
      m = 59;
      h -= 1;
      if (h < 0) {
        h = 23;
        m = 59;
      }
    }
  }
  printf("%02d:%02d", h, m);
  return 0;
}