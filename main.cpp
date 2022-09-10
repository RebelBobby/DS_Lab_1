//Joseph Matulewicz Lab 1. September 9 2022

#include <iostream>
#include <string>

using namespace std;

int factGame(int n);
void hanoiGame(int a, char fromRod, char auxRod, char toRod);
int sumGame(int n);

int main() {
   int selection;
   int game;

   while (1) {
      cout << "1 = Recursive Factorial\n";
      cout << "2 = Towers of Hanoi\n";
      cout << "3 = Recursive summation\n";
      cout << "0 = To exit\n";

      cin >> selection;

      switch (selection) {
      case 1:
         cout << "See the Factorial of []: ";
         cin >> game;
         cout << game << " is :" << factGame(game) << endl << endl;
         break;
      case 2:
         cout << "Tower of Hanoi with [] disks:";
         cin >> game;
         hanoiGame(game, 'A', 'B', 'C');
         break;
      case 3:
         cout << "The recursive summation of []: ";
         cin >> game;
         cout << sumGame(game) << endl << endl;
         break;
      case 0:
         break;
      default:
         cout << "Look at the options\n";
      }
      if (selection == 0)
         break;
   }
   return 0;
}