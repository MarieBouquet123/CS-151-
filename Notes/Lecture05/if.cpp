/**********************************************************************
 * Lecture 05: Selection Statements
 * This program will introduce you to the very first control structure
 * called the if statement. Control structures are structures that
 * execute bodies of code based on a condition which is a boolean
 * expression. 
 **********************************************************************/ 

#include <iostream> //using cout, boolalpha
using namespace std; 

/*************************************************************************
* For each of the following functions, they will implement their 
* code using an if statement. An if statement is used whenever you
* wish to execute a set of statements only if a certain condition 
* is met. Its syntax starts with the keyword if (IT MUST BE LOWERCASE) 
* which is followed by parentheses with a boolean expression between them
* which we call a condition. And the body of the if statement is 
* enclosed in curly braces as expected. The body of the if 
* statement forms a new local scope. Anyway, if the condition is true, 
* the body of the if statement is executed; however, it the 
* condition is false, the body of the if statement is skipped.
 *************************************************************************/

double Abs(double n)
{
    	/************************************************
     	* If the user entered a positive number or zero,
     	* we do not want to do anything with the number.
     	* However, if the user entered a negative 
     	* number, we want to make it, positive by 
     	* multiplying it by -1.
	************************************************/

	if(n < 0)
    	{
        	n = n * -1;
    	} 
	return n;
}

char ToLowercase(char c)
{
	if(c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return c;
}

void MakePositiveOdd(int& x)
{
	if(x < 0)
	{
		x *= -1;
	}

	if(x % 2 == 0)
	{
		x += 1;
	}
}

int main()
{
	//Make nonnegative - Absolute Value Function
	double n;

	cout << "Absolute Value\n\n";
	cout << "Enter a number: ";
	cin >> n;


	cout << "The absolute of your number is " << Abs(n) << "\n\n"; 

	//Make a letter character lowercase - ToLowercase
	char c;

	cout << "To Lowercase\n\n";
	cout << "Enter a character: ";
	cin >> c;


	cout << "Your character lowercase is " << ToLowercase(c) << "\n\n";

	//Make an integer a positive odd integer - MakePostiveOdd
	int x;

	cout << "Make Postive Odd Integer\n\n";
	cout << "Enter an integer: ";
	cin >> x;

	MakePositiveOdd(x);

	cout << "Your positive odd integer is " << x << "\n\n";
	return 0;
}
