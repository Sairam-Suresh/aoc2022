//
// Created by Sairam Suresh on 7/12/22.
//

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> g1;
    ifstream data("input.txt");
    string mytext;

    long int n, add, sum, bigt;
    while (getline(data, mytext)) {
        if (mytext == "") {
            g1.push_back(sum);
            sum = 0;
        } else {
            add = stoi(mytext);
            sum += add;
        }
    }
    sort(g1.begin(), g1.end(), greater<int>());

    cout << g1[0] + g1[1] + g1[2];
}