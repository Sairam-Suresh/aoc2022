#include <iostream>
#include <fstream>
#include <vector>
#include <list>
using namespace std;

// input
// process
// output 

/* input
   process
   output
*/

int main() {

  //int data[10] = {199, 200, 208, 210, 200, 207, 240, 269, 260, 263};
  int data[1000000000000000];
  string myText;
  int myInt;
  int biggest = 0;

  ifstream numFile("AdventOfCode22_1_input.txt"); // reading from input file

  // read data from file (disk) to array (memory)
  int i = 0;
  int totalCals = 0;
  while (getline(numFile, myText)) {
    // cout << totalCals << endl;
    // cout << i << endl;
    if (myText == "") {
      data[i] = totalCals;
      totalCals = 0;
    } else {
      totalCals += stoi(myText);
    };
    i++;
  }

  for (i=0; i < sizeof(data)-1; i++) {
    if (data[i+1] > data[i]) {
      biggest = data[i+1];// increases += 1; or increases++;
    };
  };

  cout << biggest; // \n is the newline character
  return 0;
}