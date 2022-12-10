#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ifstream data("input.txt");
  string line;
  int firstPart;
  string firstPartText;
  string secondPartText;

  string smallLetters = "abcdefghijklmnopqrstuvwxyz";
  string bigLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  int total = 0;

  int noToAdd = 0;
  while (getline(data, line)) {
    // Split String
    firstPart = (line.length() / 2);

    firstPartText = line.substr(0, firstPart);
    secondPartText = line.substr(firstPart, line.length());
    for (char i : secondPartText) {
      // cout << firstPartText.find(i) << endl;

      if (firstPartText[firstPartText.find(i)]) {
        if (smallLetters[smallLetters.find(
                firstPartText[firstPartText.find(i)])]) {
          cout << "indeed" << endl;
          noToAdd = smallLetters.find(firstPartText[firstPartText.find(i)]) + 1;
        } else {
          cout << "indeed2" << endl;
          noToAdd = bigLetters.find(firstPartText[firstPartText.find(i)]) + 27;
        }
      };
    };
    total += noToAdd;
  }
  cout << total;
}