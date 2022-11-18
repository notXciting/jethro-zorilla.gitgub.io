#include <iostream>
using namespace std;
int main(){
 int a, b, c;
 cout << "Enter two numbers: ";
 cin >> a >> b;
 cout << "\nGiven Values:" << a << ", " << b;
 c = a;
 a = b;
 b = c;
 cout << "\nSwapped Values:" << a << ", " << b;
 return 0;
}