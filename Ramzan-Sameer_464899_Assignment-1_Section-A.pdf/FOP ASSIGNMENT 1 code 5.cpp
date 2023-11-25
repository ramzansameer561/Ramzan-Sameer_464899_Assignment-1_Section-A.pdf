#include <iostream>
using namespace std;
int main() {
  string str1, str2;

  cout << "Enter the first string: ";
  getline(cin, str1);

  cout << "Enter the second string: ";
  getline(cin, str2);

  if (str1 == str2) {
    cout << "The strings are equal." << endl;

    // Rotate str1 by one position to the left
    char temp = str1[0];
    for (int i = 1; i < str1.length(); i++) {
      str1[i - 1] = str1[i];
    }

 
    str1 += temp;

    cout << "Rotated string: " << str1 << endl;
  } else {
    cout << "The strings are not equal." << endl;
  }

  return 0;
}

