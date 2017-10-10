#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;

int rollDice();

int main()
{
  srand(time(0)); //random number generator

  int second_roll;
  int first_roll;
  bool win = false; //set equal to false first

  first_roll = rollDice();  

  cout << first_roll << endl;

  if(first_roll == 7 || first_roll == 11) //you win if roll 7 or 11 first
    {
      win = true;
    }
  else if( first_roll == 2 || first_roll == 3 || first_roll == 12) //you lose if you roll 2, 3, or 12 first
    {
      win = false;
    }
  else //do while is implimented below else. keep rolling until you win or lose
    {
   do
     {
       second_roll = rollDice();
       
       cout << second_roll <<endl;

       if(second_roll == 7) //you lose if you roll 7 on the second try
	 {
	   win = false;
	 }
       else if (second_roll == first_roll) //if your second roll equals first roll, you win
	 {
	   win = true;
	 }
       
     }while(second_roll != 7 && second_roll != first_roll); //loop keeps going as long as the second roll is not 7 or the same as first roll

    } 
 
  if(win == true)
    cout << " ==== WIN ====" <<endl;

  else //win = false
    cout << " ==== LOSE ====" <<endl;
   
  
  return 0;
  
}

int rollDice()
{
  int roll;
  roll = (rand() % 6 + 1) + (rand() % 6 + 1); //roll a random number from 1 - 12

  return roll;

}
