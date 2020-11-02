/************************************************************************
 * Lecture 07: For Loops
 * This program will introduce you to the for loop. The for loop unlike
 * the while has a header that consists of an initialization section,
 * condition, and modification section. The for loop is used for looping
 * through sequences, ideally counting. The initialization section is 
 * used to either initial variables of the same data type or the 
 * assign values to variables that have already been declared. The 
 * modification section is used to assign new values to variables; it
 * is separate from the body of the for loop. The sections of the for 
 * loop header are separated by semicolons. 
 ************************************************************************/ 

#include <iostream> //using cout, boolalpha
using namespace std; 

/********************************************
 * Function Definitions
 *******************************************/
void CountToN(int n)
{
    for(int i = 1;i <= n;i += 1)
    {
        cout << i << "\n";
    }
}

void CountFromN(int n)
{
    for(int i = n;i > 0;i -= 1)
    {
        cout << i << "\n";
    }
}

int CountAttempts()
{
    int c = 1;
    int guess;
    int value = 7;

    cout << "Guess the number I am thinking about between 1 and 10: ";
    cin >> guess;

    for(;guess != 7;c += 1)
    {
        cout << "Try again: ";
        cin >> guess;
    }
    return c;
}

//Function Prototype
void Sequence(int start,int end,int step);

int main()
{
    cout << "Counting Up To 20 starting from 1\n";
    CountToN(20);
    cout << "\n\n";

    cout << "Counting Down To 1 starting from 20\n";
    CountFromN(20);
    cout << "\n\n";

    cout << "Counting the number of times the user tried guessing a number\n";
    int attempts = CountAttempts();
    cout << "You took " << attempts << " attempt(s) to guess my number\n";
   
    Sequence(1,17,2);
    Sequence(2,100,2);
    cout << "\n";

    return 0;
}

void Sequence(int start,int end,int step)
{
    for(int i = start;i <= end;i += step)
    {
        cout << i << "\n";
    }
}
