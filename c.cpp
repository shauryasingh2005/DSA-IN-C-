#include <iostream>
#include <utility> // for std::swap
using namespace std;

// Recursive function to reverse the array using two pointers
void rev(int l, int r, int n[]) {
  // Base case: stop when the left pointer meets or crosses the right pointer
  if (l >= r) {
    return;
  }

  // Swap the elements at the left and right positions
  swap(n[l], n[r]);

  // Recurse with updated pointers
  rev(l + 1, r - 1, n);
}

int main() {
  int n[3];
  for (int i = 0; i <= 2; i++) {
    cin >> n[i];
  }
  int l = 0, r = 2;
  rev(l, r, n); // Pass array name 'n' without brackets
  
  // Optional: print the elements to verify they are reversed
  for (int i = 0; i <= 2; i++) {
    cout << n[i] << " ";
  }
  cout << endl;
}