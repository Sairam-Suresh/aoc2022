//
// Created by Sairam Suresh on 7/12/22.
//

#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<string> allstr = {};
  vector<char> finalint = {};
  ifstream data("input.txt");
  string content;
  string sb1;
  string sb2;
  string sb3;
  int a;
  int u;
  int sum = 0;
  int c = 0;
  int d = 1;
  int e = 2;
  int value = 0;
  while (getline(data, content)) {
    allstr.push_back(content);
  }
  while (e < allstr.size()) {
    sb1 = allstr[c];
    sb2 = allstr[d];
    sb3 = allstr[e];
    for (int c = 0; c < sb1.size(); ++c) {
      for (int d = 0; d < sb2.size(); ++d) {
        for (int e = 0; e < sb3.size(); ++e) {
          if (sb1[c] == sb2[d] && sb1[c] == sb3[e]) {
            a = sb1[c];
          }
        }
      }
      if (a < 96) {
        u = a - 38;
      } else {
        u = a - 96;
      }
    }
    c += 3;
    d += 3;
    e += 3;
    sum += u;
  }
  cout << sum;
}