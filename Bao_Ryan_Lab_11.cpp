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
    for (i = 0; i <= 24; i++) {
        alpha[i] = pow(i, 2);
    }
    for (i = 25; i <= 50; i++) {
        alpha[i] = i * 3;
    }
    cout << " " << endl;

    //Part 2
    cout << "Part 2" << endl;
    i = 0;
    while (i <= 50)
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
    cout << "Part 3" << endl;
    srand(time(0));;
    i = 0;
    for (i = 0; i <= 50; i++) {
        alpha[i] = 1 + (rand() % 100);
    }
    cout << " " << endl;

    //Part 4
    cout << "Part 4" << endl;
    i = 0;
    int sum = 0;
    double average;
    for (i = 0; i <= 50; i++) {
        sum = sum + alpha[i];
    }
    average = sum/50;
    cout << average << endl;
    cout << " " << endl;

    //Part 5
    cout << "Part 5" << endl;
    int counter = 0;
    i = 0;
    for (i = 0; i <= 50; i++) {
        if (alpha[i] == 100) {
            counter += 1;
        }
    }
    cout << "The number 100 appeared " << counter << " times." << endl;

}