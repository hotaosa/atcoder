#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int a;
      cin >> a;
      if (a) {
        cout << j + 1 << " ";
      }
    }
    cout << endl;
  }

  return 0;
}