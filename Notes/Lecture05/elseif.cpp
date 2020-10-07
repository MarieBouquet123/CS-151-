/***********************************************************************
 * Lecture 05: Selection Statements (continue)
 * This program will introduce you to the else-if statement. The
 * else-if statement is several statements. Like the if statement, the 
 * else-if statement starts the same way; however, immediately after 
 * the if statement body, the else if statement is written. else if 
 * statements have  conditions. An else if statement terminates as soon 
 * as one of the conditions is true or no condition is true. If any 
 * condition is true, the body of that statement will be executed only. 
 * Hence, else-if statements are used whenever you have multiple choices
 * to choose from. 
 * Note: an else statement can be added to the end.
 ***********************************************************************/ 

#include <iostream> //using cout, boolalpha
#include <string>
using namespace std; 


/**********************************************************************
* As you see in the below functions, the else-if statement starts 
* with the keyword else (IT MUST BE LOWERCASE) followed by the 
* keyword if (IT MUST BE LOWERCASE) with a space between them. 
* Afterwards, it has a condition enclosed in parentheses and a body.
* The else-if statement body will only execute if the conditions of 
* all the statements before it are false and its condition is true.
**********************************************************************/

void IntegerType(int a)
{
	if(a < 0)
	{
		cout << a << " is negative\n\n";
	} 
	else if(a > 0)
	{
		cout << a << " is positive\n\n";
	}
	else if(a == 0)
	{
		cout << a << " is zero\n\n";
	}
}

string LetterGrade(double grd)
{    
	if(grd >= 90)
	{
		return "A\n\n";
	}
	else if(grd < 90 && grd >= 80) 
	{
		return "B\n\n";
	}
	else if(grd < 80 && grd >= 70)
	{
		return "C\n\n";
	}
	else if(grd < 70 && grd >= 60)
	{
		return "D\n\n";
	}
	else
	{
		return "F\n\n";
	}
}
    
int main()
{
	//IntegerType - states if a value is positive, negative or zero
	int a;

	cout << "Type of Integer\n\n";
	cout << "Enter an integer: ";
	cin >> a;
	
	IntegerType(a);

	//LetterGrade - displays the letter grade associated with the grade entered
	double grd;

	cout << "Letter Grade\n\n";
	cout << "Enter a grade: ";
	cin >> grd;

	cout << "Your letter grade is " << LetterGrade(grd);

	return 0;
}
