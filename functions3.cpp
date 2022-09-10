//Joseph Matulewicz Lab 1. September 9 2022

#include "functions3.h"
#include <string>
#include <iostream>
using namespace std;

//Factorial function
int factGame(int n) {
   if (n == 1)
      return 1;
   else
      return n * factGame(n - 1);
}

//Tower of Hanoi Function
void hanoiGame(int a, char fromRod, char auxRod, char toRod) {
   if (a == 1) {
      cout << "Move disc 1 from " << fromRod << " to " << toRod << "\n";
      return;
   } else {
      hanoiGame(a - 1, fromRod, toRod, auxRod);
      cout << "Move disc " << a << " from " << fromRod << " to " << toRod <<
         "\n";
      hanoiGame(a - 1, auxRod, fromRod, toRod);
   }
}

//Recursive Summation Function
int sumGame(int n) {
   if (n == 1)
      return 1;
   else
      return n + sumGame(n - 1);
}