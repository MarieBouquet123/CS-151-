/**********************************************************************
 * Lecture 01: Numerical Operations
 * This program will introduce you to the different operations you 
 * can perform on numerical data types.
 *********************************************************************/ 

#include <iostream> //using cout
using namespace std; 

int main()
{
    /*Integer and Floating-Point Operations*/
    cout << "Integer and Floating-Point Operations\n\n";
 
    /********************************************
    * Integer and Floating-Point operations are 
    * arithmetic operations. Most of the symbols
    * you use in mathematics for the operations 
    * are adopted.     
    *********************************************/
    
    /*Addition Operation*/
    cout << "The symbol for addition is +\n\n";

    cout << "Integer Addition\n";
    cout << "2 + 5 = " << (2 + 5) << " (int)\n";
    cout << "5 + 2 = " << (5 + 2) << " (int)\n\n";

    cout << "Floating-Point Addition\n";
    cout << "2.0 + 5.0 = " << (2.0 + 5.0) << " (double)\n";
    cout << "5.0 + 2.0 = " << (5.0 + 2.0) << " (double)\n";

    cout << "\nAs you see above, addition is commutative.\n";
    cout << "If the operands are a mixture of integer\n";
    cout << "and floating-point data types, the result of\n";
    cout << "the operation is interrupted as a floating-point\n\n";

    cout << "Mixed Addition\n";
    cout << "2 + 5.0 = " << (2 + 5.0) << " (double)\n";
    cout << "5.0 + 2 : " << (5.0 + 2) << " (double)\n";

    /*Subtraction Operation*/
    cout << "\nThe symbol for subtraction is -\n\n";

    cout << "Integer Subtraction\n";
    cout << "2 - 5 = " << (2 - 5) << " (int)\n";
    cout << "5 - 2 = " << (5 - 2) << " (int)\n\n";

    cout << "Floating-Point Subtraction\n";
    cout << "2.0 - 5.0 = " << (2.0 - 5.0) << " (double)\n";
    cout << "5.0 - 2.0 = " << (5.0 - 2.0) << " (double)\n\n";

    cout << "Mixed Subtraction\n";
    cout << "2 - 5.0 = " << (2 - 5.0) << " (double)\n";
    cout << "5.0 - 2 = " << (5.0 - 2) << " (double)\n";

    /*Multiplication Operation*/
    cout << "\nThe symbol for multiplication is *\n\n";

    cout << "Integer Multiplication\n";
    cout << "2 * 5 = " << (2 * 5) << " (int)\n";
    cout << "5 * 2 = " << (5 * 2) << " (int)\n\n";

    cout << "Floating-Point Multiplication\n";
    cout << "2.0 * 5.0 = " << (2.0 * 5.0) << " (double)\n";
    cout << "5.0 * 2.0 = " << (5.0 * 2.0) << " (double)\n";

    cout << "\nLike addition, multiplication is commutative as expected\n\n";
    cout << "Mixed Multiplication\n";
    cout << "2 * 5.0 = " << (2 * 5.0) << " (double)\n";
    cout << "5.0 * 2 : " << (5.0 * 2) << " (double)\n";

    /*Division Operation*/
    cout << "\nThe symbol for division is /\n\n";

    cout << "Integer Division\n";
    cout << "2 / 5 = " << (2 / 5) << " (int)\n";
    cout << "5 / 2 = " << (5 / 2) << " (int)\n\n";

    cout << "When you divide two integers as seen above,\n";
    cout << "the result is the quotient of integer division\n\n";

    cout << "Floating-Point Division\n";
    cout << "2.0 / 5.0 = " << (2.0 / 5.0) << " (double)\n";
    cout << "5.0 / 2.0 = " << (5.0 / 2.0) << " (double)\n";

    cout << "Whereas division of two floating-point operands\n";
    cout << "is decimal division\n\n";

    cout << "Mixed Division\n";
    cout << "2 / 5.0 = " << (2 / 5.0) << " (double)\n";
    cout << "5.0 / 2 = " << (5.0 / 2) << " (double)\n";

    /*Modulus Operation*/
    cout << "\nAn additional operator is available only\n";
    cout << "for integer data types which is called modulus.\n";
    cout << "The symbol for modulus is %. The result of modulus\n";
    cout << "division is the remainder of integer division\n\n";

    cout << "Integer Modulus Division\n";
    cout << "2 % 5 = " << (2 % 5) << " (int)\n";
    cout << "5 % 2 = " << (5 % 2) << " (int)\n\n";

    /************************************************************
    * Like in mathematics, you can write complex mathematical
    * expressions. With those expressions, you evaluate the
    * expression by using the order of precedence rules. 
    * In C++, the order of precedence rules are similar to 
    * mathematics. They are:
    * 1. Parentheses - ()
    * 2. Multiplication, Division, Modulus - *, /, % 
    * 3. Addition, Subtraction - +, -
    * Eactly like mathematics, operations with the same 
    * precedence are evaluated from left to right
    *************************************************************/

    //Expression are arguments, hence they can be assigned to variables
    //Evaulate these expressions before you compile the code

    cout << "Evaluations of expressions\n";
    cout << "78 + 4 * 12 - 10 = " << (78 + 4 * 12 - 10) << "\n";
    cout << "(78 + 4) * (12 - 10) = " << ((78 + 4) * (12 - 10)) << "\n";
    cout << "40 - 64 % 7 / 2 = " << (40 - 64 % 7 / 2) << "\n"; 
    cout << "67 / 5 + 4.5 * 3 = " << (67 / 5 + 4.5 * 3) << "\n"; //Think about this one
    cout << "54.0 / 12 * 5 = " << (54.0 / 12 * 5) << "\n";

    return 0;
}
