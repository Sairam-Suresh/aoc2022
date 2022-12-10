//
// Created by Sairam Suresh on 7/12/22.
//

#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main() {

    ifstream data("input.txt");
    string line;
    long int add, sum;

  cout << "";
  while (getline(data, line)) {
    if (line == "A X") {
      add = 3;
      sum += add;
    } else if (line == "A Y") {
      add = 4;
      sum += add;
    } else if (line == "A Z") {
      add = 8;
      sum += add;
    }

    if (line == "B X") {
      add = 1;
      sum += add;
    } else if (line == "B Y") {
      add = 5;
      sum += add;
    } else if (line == "B Z") {
      add = 9;
      sum += add;
    }

    if (line == "C X") {
      add = 2;
      sum += add;
    } else if (line == "C Y") {
      add = 6;
      sum += add;
    } else if (line == "C Z") {
      add = 7;
      sum += add;
    }
  }
  cout << sum;
}