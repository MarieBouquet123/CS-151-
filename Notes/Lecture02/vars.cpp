/**********************************************************************
 * Lecture 01.02: Variables
 * This program will introduce you to variables, implicit and explicit 
 * typecasting, and cin object.
 *********************************************************************/ 

#include <iostream> //using cout, cin, boolalpha
#include <string> //using string
using namespace std; 

int main()
{
	/************************************************
	*A variable is a storage location. It holds
	*data for future use. Every variable has an 
	*r-value and l-value component. The r-value is 
	*the content of the variable and the l-value is 
	*the memory address of the variable. To declare a 
	*variable, which means you are creating it without
	*assigning data to it, you write a data type 
	*followed by an identifer and a semicolon.
	*************************************************/
    	/*Data types and Variables*/
    	/*Integer Data Types*/
   	 short v1;
    	int v2;
    	long v3;
    	unsigned short v4;
    	unsigned int v5;
    	unsigned long v6;

    	/*Floating Point Data Types*/
    	float v7;
    	double v8;
    	long double v9;

    	/*Character Data Type*/
    	char v10;

    	/*String Data Type*/
    	string v11; //This data type is from the string library. 
    	//For the g++ compiler this library is implicitly loaded in your code

    	/*Boolean Data Type*/
    	bool v12; 

    	/*All of the variables above have been declared. This means 
    	they all have l-values (address locations). */

    	/*The display of the l-value of each variable*/

    	cout << "The display of the r-value of each variable\n\n";
    	cout << "v1 : " << &v1 << " (short)\n";
    	cout << "v2 : " << &v2 << " (int)\n";
    	cout << "v3 : " << &v3 << " (long)\n";
    	cout << "v4 : " << &v4 << " (unsigned short)\n";
    	cout << "v5 : " << &v5 << " (unsigned int)\n";
    	cout << "v6 : " << &v6 << " (unsigned long)\n";
    	cout << "v7 : " << &v7 << " (float)\n";
    	cout << "v8 : " << &v8 << " (double)\n";
    	cout << "v9 : " << &v9 << " (long double)\n";
    	/*Char varaibles are special in C++. 
    	Whenever you are displaying the address 
    	of a char variable, its r-value (content)
    	will display instead*/ 
    	cout << "v10 : " << &v10 << " (char)\n";
    	cout << "v11 : " << &v11 << " (string)\n";
    	cout << "v12 : " << &v12 << " (bool)\n";   

    	/*The display of the size of each data type*/
    	cout << "\nThe display of the size of each data type\n\n";

    	cout << "Short: " << sizeof(short) << " byte(s)\n";
    	cout << "Int: " << sizeof(int) << " byte(s)\n";
    	cout << "Long: " << sizeof(long) << " byte(s)\n";
    	cout << "Unsigned Short: " << sizeof(unsigned short) << " byte(s)\n";
    	cout << "Unsigned Int: " << sizeof(unsigned int) << " byte(s)\n";
    	cout << "Unsigned Long: " << sizeof(unsigned long) << " byte(s)\n";
    	cout << "Float: " << sizeof(float) << " byte(s)\n";
    	cout << "Double: " << sizeof(double) << " byte(s)\n";
    	cout << "Long Double: " << sizeof(long double) << " byte(s)\n";
    	cout << "Char: " << sizeof(char) << " byte(s)\n";
    	cout << "String: " << sizeof(string) << " byte(s)\n";
    	cout << "Bool: " << sizeof(bool) << " byte(s)\n";
    
    	/*Variable assignments and literals*/
    	/*Variable assignments provide the r-value (content) to the 
    	variable*/

    	/*Integer Literals*/
    	v1 = -48;
    	v2 = 8933;
    	v3 = 123930940;
    	v4 = 23;
    	v5 = 1809;
    	v6 = -1;

    	/*Floating-Point Literals*/
    	v7 = 273.3432;
    	v8 = 3.1415926535897;
    	v9 = -3.1415926535897;

    	/*Char Literal*/
    	v10 = 'r';

    	/*String Literal*/
    	v11 = "Hello World";

    	/*Boolean Literal*/
    	v12 = true;

    	/*The display of the r-value of each variable*/
    
    	cout << "\nThe display of the l-value of each variable\n\n";
    	cout << boolalpha; //displays true/false for boolean variable instead of 1/0
    	cout << "v1 : " << v1 << " (short)\n";
    	cout << "v2 : " << v2 << " (int)\n";
    	cout << "v3 : " << v3 << " (long)\n";
    	cout << "v4 : " << v4 << " (unsigned short)\n";
    	cout << "v5 : " << v5 << " (unsigned int)\n";
    	cout << "v6 : " << v6 << " (unsigned long)\n";
    	cout << "v7 : " << v7 << " (float)\n";
    	cout << "v8 : " << v8 << " (double)\n";
    	cout << "v9 : " << v9 << " (long double)\n";
    	cout << "v10 : " << v10 << " (char)\n";
    	cout << "v11 : " << v11 << " (string)\n";
    	cout << "v12 : " << v12 << " (bool)\n";   

    	/******************************************************************
	* Typecasting is the process of converting a data type to another
    	* data type. Some data types can be implicitly typecasted, while 
    	* others need to be explicitly typecasted or cannot be typecasted
    	* at all.
	*******************************************************************/

    	/*Implicit Typecast*/
    	cout << "\nTypecasting Section\n\n";
    	/*Integer Type to Integer Type*/
    	cout << "Integer to Integer\n";
    	v4 = v1;
    	v2 = v6;
    	v3 = v5;

    	cout << "v1 -> v4 : " << v4 << " (short -> unsigned short)\n";
    	cout << "v6 -> v2 : " << v2 << " (unsigned long -> int)\n";
   	cout << "v5 -> v3 : " << v3 << " (unsigned int -> long)\n";
    
   	 /*Floating-Point Type to Integer Type*/
    	cout << "\nFloating=Point to Integer\n";
    	v1 = v8;
    	v3 = v7;

    	cout << "v8 -> v1 : " << v1 << " (double -> short)\n";
    	cout << "v7 -> v3 : " << v3 << " (float -> long)\n";

    	/*Integer Type to Floating-Point Type*/
    	cout << "\nInteger to Floating-Point\n";
    	v7 = v1;
    	v8 = v3;

    	cout << "v1 -> v7 : " << v7 << " (short -> float)\n";
    	cout << "v3 -> v8 : " << v8 << " (long -> double)\n";

    	/*Floating-Point Type to Floating-Point Type*/
    	cout << "\nFloating-Point to Floating-Point\n";
    	v7 = v9;

    	cout << "v9 -> v7 : " << v7 << " (long double -> float)\n";
    
    	/*Character Type to Integer Type*/
    	cout << "\nCharacter to Integer\n";
    	v2 = v10;

    	cout << "v10 -> v2 : " << v2 << " (char -> int)\n";

    	/*Integer Type to Character Type (With Restrictions)*/
    	cout << "\nInteger to Character\n";
    	v10 = v2;

    	cout << "v2 -> v10 : " << v10 << " (int -> char)\n";

    	/*Integer Type to Boolean Type*/
    	cout << "\nInteger to Boolean\n";
    	v12 = v4;

    	cout << "v4 -> v12 : " << v12 << " (unsigned short -> bool)\n";

    	/*Boolean Type to Integer Type*/
    	cout << "\nBoolean to Integer\n";
    	v2 = v12;

    	cout << "v12 -> v2 : " << v2 << " (bool -> int)\n";

    	/*Character Type to String Type*/
    	cout << "\nCharacter to String\n";
    	v11 = v10;

    	cout << "v10 -> v11 : " << v11 << " (char -> string)\n";
	
	/***************************************************************
	* To explicitly typecast, you precede the argument by the data
	* type you want to convert it to in parentheses, or you the 
	* static_cast<> function
	****************************************************************/

	cout << "\nExplicit Typecasting\n";
	cout << "2.5 * 3.1 to an int is " << (int)(2.5 * 3.1) << " (float -> int)\n";
	cout << "false to an int is " << static_cast<int>(false) << " (bool -> int)\n";

	/*****************************************************************
	* Now that you know hold to use a variable, you can now receive 
	* data from the user. The cin function (actually an object) allows
	* you to read in data from a user and store it in a variable. 
	* Whenever you use cin you must you the istream (extraction) 
	* operator (>>). The syntax for cin looks similar to the syntax 
	* for cout except you use the istream operator instead of the 
	* ostream operator, and the argument must be a variable.
	*****************************************************************/

	cout << "\nEnter an integer: ";
	cin >> v1; //The porgram will wait for you to enter a value.
	cout << "You entered " << v1 << "\n";

	//It is important to note that the cin object expects the data
	//the user enter is of the type of the data type of the 
	//variable. If the data does not match you can get garbage or 
	//an error.


    	return 0;
}
