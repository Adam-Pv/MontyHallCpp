#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL));

  int firstPick   = 0;
  int changedPick = 0;

  for (int i = 0; i <= 10000; i++) {
        int prize = rand()%3;   // randomly picking a door to hold the prize.
        int pick  = rand()%3;   // randomly picking a door to chose.

       if (pick == prize) {     // first pick was correct
            firstPick++;
       } else {                 // else, changing will always be correct
            changedPick++;
       }
  }

  /*  Displays how many times contestant would be correct
      if they stayed vs if they changed.*/
  cout << "first pick : " << firstPick << endl;
  cout << "changed pick : " << changedPick << endl;

  return 0;
}
