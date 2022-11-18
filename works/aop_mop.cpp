#include <iostream>
using namespace std;

int main() {
  int mop;
  float aop, total;

  cout << "For Mode of Payment:" << endl;
  cout << "1 = 10% Discount" << endl;
  cout << "2 = 20% Discount" << endl;
  cout << "3 = 10% Interest" << endl;
  cout << "4 = 20% Interest" << endl;
  cout << endl;

  cout << "Enter the amount of product: ";
  cin >> aop;
  cout << "Enter the mode of payment: ";
  cin >> mop;
  cout << endl;

  if ((mop >= 5) || (mop <= 0)) {
    cout << "ERROR! Please enter a valid Mode of Payment.";
  } else if ((mop <= 4) || (mop > 0)) {
    float discount1 = aop - (aop * 10 / 100);
    float discount2 = aop - (aop * 20 / 100);
    float interest1 = aop - (aop * 10 / 100);
    float interest2 = aop - (aop * 20 / 100);

    switch (mop) {
    case 1:
      cout << "Your total is: " << discount1;
      break;
    case 2:
      cout << "Your total is: " << discount2;
      break;
    case 3:
      cout << "Your total is: " << interest1;
      break;
    case 4:
      cout << "Your total is: " << interest2;
      break;
    }
  }

  return 0;
}