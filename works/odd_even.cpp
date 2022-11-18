#include <iostream>
using namespace std;

int main() {
  int start, end, i;
  int osum = 0;
  int esum = 0;

  cout << "Enter starting number: ";
  cin >> start;
  cout << "Enter ending number: ";
  cin >> end;
  cout << endl;

  if (start > end) {
    cout << "ERROR!";
  } else if (start < end) {
    cout << "ODD NUMBERS" << endl;
    i = start;
    while (i <= end) {
      if (i % 2 != 0)
        osum += i;
      if (i % 2 != 0)
        cout << i << " ";
      i++;
    }
    cout << "Sum: " << osum;
    cout << endl;

    cout << "EVEN NUMBERS" << endl;
    i = start;
    while (i <= end) {
      if (i % 2 == 0)
        esum += i;
      if (i % 2 == 0)
        cout << i << " ";
      i++;
    }
    cout << "Sum: " << esum;
  }
  return 0;
}