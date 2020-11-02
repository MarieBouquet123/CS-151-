/***********************************************************************
 * Lecture 07: While Loops
 * This program will introduce you to iterations. They are loops; they
 * repeat a series of statements until a condition becomes false. They  
 * are important for authentications and counting along with other 
 * things. The first type of iteration we will learn is the while loop. 
 ***********************************************************************/ 

#include <iostream> //using cout, boolalpha
using namespace std; 

/********************************************
 * Function Definitions
 *******************************************/

void CountToFifty()
{
    /***************************************
    * This function will display the numbers
    * 1 through 50 by using a loop. The 
    * process of counting to 50 is a 
    * repetitive one. It requires you to say
    * a number, increment by 1, and then 
    * repeat. This is an example of a 
    * counting problem.
    ****************************************/

    //counter variable
    int c = 1;

    //Our while loop
    while(c <= 50)
    {
        cout << c << "\n";
        c = c + 1;
    }     
}

void GuessMyLetter()
{
    /***************************************
    * This function will make to user guess
    * a letter until it valid. The 
    * process is repetitive. It requires that 
    * you get the user's input, and then 
    * repeat. This is an example of a 
    * validation (sentinel) problem.
    ****************************************/

    char l;
    //The desired input
    char a = 'H';
    char b = 'h';

    //Initial Prompt
    cout << "Guess the letter I am thinking of\n";
    cout << "Enter a letter: ";
    cin >> l;

    //The while loop
    while(l != a || l != b)
    {
        cout << "Re-enter a letter: ";
        cin >> l;
    }

    //Final message
    cout << "You got it\n\n";
}

int main()
{
    CountToFifty();
    cout << "\n";
    GuessMyLetter();
    
    return 0;
}
