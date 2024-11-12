//Ryan Bao
//11/12/24
//Lab 11

#include<iostream>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    const int ARRAY_SIZE = 50;
   	double alpha[ARRAY_SIZE];
    int i;

    //Part 1
    cout << "Part 1" << endl;
    for (i = 0; i <= 24; i++) {          //For loops to get array values
        alpha[i] = pow(i, 2);
    }
    for (i = 25; i <= 50; i++) {
        alpha[i] = i * 3;
    }
    cout << " " << endl;

    //Part 2
    cout << "Part 2" << endl;
    i = 0;
    while (i <= 50)                         //Make a new line every 10 by using modulus
        if (i % 10 != 0) {
            cout << alpha[i] << " ";
            i += 1;
        }
        else {
            cout << alpha[i] << endl;
            i += 1;
        }
    cout << " " << endl;

    //Part 3
    cout << "Part 3" << endl;                    //Use srand and rand for randomization
    srand(time(0));;
    i = 0;
    for (i = 0; i <= 50; i++) {
        alpha[i] = 1 + (rand() % 100);
    }
    cout << " " << endl;

    //Part 4
    cout << "Part 4" << endl;
    i = 0;
    int sum = 0;                       //Cycle through alpha and add values up 
    double average;
    for (i = 0; i <= 50; i++) {
        sum = sum + alpha[i];
    }
    average = sum/50;                 //Divide values
    cout << average << endl;
    cout << " " << endl;

    //Part 5
    cout << "Part 5" << endl;           
    int counter = 0;
    i = 0;
    for (i = 0; i <= 50; i++) {            //Cycle through alpha if alpha[i] is equal to 100 counter adds one
        if (alpha[i] == 100) {
            counter += 1;
        }
    }
    cout << "The number 100 appeared " << counter << " times." << endl;

}

/*
Part 1

Part 2
0
1 4 9 16 25 36 49 64 81 100
121 144 169 196 225 256 289 324 361 400
441 484 529 576 75 78 81 84 87 90
93 96 99 102 105 108 111 114 117 120
123 126 129 132 135 138 141 144 147 150

Part 3

Part 4
51

Part 5
The number 100 appeared 0 times.
*/