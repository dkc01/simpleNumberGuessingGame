#include <iostream>

using namespace std;

int main()
{
   // Declare symbolic constant
   const unsigned short RANGE = 90,
                        START_NUMBER = 10;
   
   // Declare variables
   unsigned short number, 
                  guessCount;
   bool playAgain;  
   short userGuess;
   
   // Seed random generator
   srand ( time( NULL) );
   
   // Input whether the user wants to play playAgain
   cout << "Enter 1 if you want to play again and 0 if otherwise" << endl;
   cin >> playAgain;
   
   while (playAgain)
   {
       // Computer generates a number
       number = rand() % RANGE + START_NUMBER;
       
       // Initialize accumulator variables (always intialize it just before the loop)
       guessCount = 0;
       
       do
       {
               // Input user's guess 
               do
               {
               cout << "Enter a number in the range " 
                    << START_NUMBER << " to " << START_NUMBER + RANGE - 1 << endl;
               cin >> userGuess;
               } while(!(userGuess >= START_NUMBER && userGuess <= START_NUMBER + RANGE - 1 ));
           
           // Update guessCount
           guessCount = guessCount + 1;
           
           // Print whether user's guess is high or low 
           if ( userGuess < number)
           {
               cout << "Guess higher" << endl;
           }
           else
           {
               if ( userGuess > number)
               {
                   cout << "Guess lower" << endl;
               }
               else
               {
                   cout << "You guessed the correct number!" << endl;
               }
           }
       } while ( userGuess != number );
       
       // Print the number of guesses
       cout << "It took you " << guessCount << " guesses to guess a number " << endl;
       
    // Input whether the user wants to play playAgain
    cout << "Enter 1 if you want to play again and 0 if otherwise" << endl;
    cin >> playAgain;
   }
   
   // cout << " Generated " << number;

    return 0;
}


