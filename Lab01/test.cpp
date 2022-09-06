#include <iostream>
#include <vector>

using namespace std;
int main() {
  for (vector<int> v{1, 2, 3}; auto &e : v) {
    cout << e << endl;
  }
  return 0;
}