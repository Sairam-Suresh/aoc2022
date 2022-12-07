#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream data("/Users/sairamsuresh/Documents/aoc2022/AdventOfCode/AdventOfCode22(1)/input.txt");
    string mytext;
    long int add, sum, bigt;

    while (getline(data, mytext)) {
        sum=0;
        if (mytext==""){
            if (sum>bigt){
                bigt=sum;
            }
        }else{
            add=stoi(mytext);
            sum+=add;    }
    }
    cout<<bigt;
}
