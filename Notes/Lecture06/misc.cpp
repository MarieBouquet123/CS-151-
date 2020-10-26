/**********************************************************************
* Lecture 06: Arrays
* This program will introduce you to arrays. An array is a series of 
* same type objects. In other words, it is multiple variables of the 
* same type all in one variable. It significantly helps when you are 
* dealing with program that requires a lot of data manipulation. Each
* element of an array can be accessed with an index which is an 
* nonnegative integer that is between 0 inclusively and the size of the
* array exclusively i.e (0 <= index < size). Furthermore, arrays can be
* parameters of functions. They are always passed by reference. 
 **********************************************************************/ 

#include <iostream> //using cout, boolalpha
#include <cstdlib> //srand(), rand()
#include <ctime> //time()
#include <string>
#include <iomanip> //setw()
using namespace std; 

/*************************************************************************
* For each of the following functions, they will have array parameters.
* They assume that the size of the array parameters are 5. In future
* lectures, we will handle arrays of any size.
**************************************************************************/

void Print(int a[])
{
	cout << '[' << setw(3) << a[0] << ',';
	cout << setw(3) << a[1] << ',';
	cout << setw(3) << a[2] << ',';
	cout << setw(3) << a[3] << ',';
	cout << setw(3) << a[4] << "]\n";
}

void Init(int b[],int lo,int hi)
{
	int mx, mn;
	
	if(lo <= hi)
	{
		mn = lo;
		mx = hi;
	}
	else
	{
		mn = hi;
		mx = lo;
	}
	
	//Assign random values to the elements
	//in the range [mn,mx] 
	b[0] = rand() % (mx - mn + 1) + mn;
	b[1] = rand() % (mx - mn + 1) + mn;
	b[2] = rand() % (mx - mn + 1) + mn;
	b[3] = rand() % (mx - mn + 1) + mn;
	b[4] = rand() % (mx - mn + 1) + mn;
} 

double Average(int c[])
{
	double sum = c[0] + c[1] + c[2] + c[3] + c[4];
	return sum / 5.0; 
}

//returns the index of the first instance of ch in str
//from the first five characters
int SearchFive(string str,char ch)
{
	if(str[0] == ch || str[0] == '\0')
	{
		return ((str[0] == ch)?(0):(-1));
	}
	
	if(str[1] == ch || str[1] == '\0')
	{
		return ((str[1] == ch)?(1):(-1));
	}
	if(str[2] == ch || str[2] == '\0')
	{
		return ((str[2] == ch)?(2):(-1));
	}
	if(str[3] == ch || str[3] == '\0')
	{
		return ((str[3] == ch)?(3):(-1));
	}
	if(str[4] == ch || str[4] == '\0')
	{
		return ((str[4] == ch)?(4):(-1));
	}
	return -1;
}

//only accepts two dimensional arrays with its size for the
//second dimension equal to 5
double AvgSum(int a[][5])
{
	double sum = 0.0;

	//passing a subarray
	sum += Average(a[0]);
	sum += Average(a[1]);
	sum += Average(a[2]);
	sum += Average(a[3]);

	return sum;
}

int main()
{
	srand(time(NULL)); //seed pseudo-random generator 
	const int a = 10;
	string b;
	char c;
	/**************************************************************
	* To declare a multidimensional array you attach additional 
	* the subscript operators with a size between its symbols to 
	* the end of the identifer.
	**************************************************************/
	int nm[a][5], an[5][5][5]; //size can be either a const int variable or a int literal

	/********************************************************
	* To initialize a multidimensional array, you use an 
	* initialization list of initialization lists where each
	* inner initialization list does not exceed the size of 
	* its dimension. You can also just use a standard 
	* intialization list that does not exceed to product of 
	* the sizes of the dimensions. When you a standard 
	* initialization list, the elements are initialized in 
	* ascending order per dimension. For instance, for the 
	* array n[2][3] the elements will be initialized in the 
	* order n[0][0], n[0][1], n[0][2], n[1][0], n[1][1] and 
	* n[1][2] 
	**********************************************************/
	int cnt[10][10] = {1,2,3,4,5,6,7,8,9,10}, ht[3][3][5] = {{{1,2,4,5,4},{0,0,0,0,0},{2,4,6,8,10}},{{1,2,3},{4,2,1,5}},{{1}}};
	
	cout << "Enter a string: ";
	cin >> b;
	
	cout << "Enter a character: ";
	cin >> c;

	int v = SearchFive(b,c);

	cout << "The character " << c << " is " << ((v == -1)?(string("not any of the first five characters of ")):("in position " + to_string(v + 1) + " of ")) << b << "\n"; 
	
	/*********************************************************
	* To access an element of an array you use an index 
	* enclosed by the subscript operator for each dimension. 
	*********************************************************/
	cout << "cnt[0][1] : " << cnt[0][1] << "\n";
	cout << "cnt[0][5]: " << cnt[0][5]<< "\n";

	//Subarrays of multidimensional array can be acessed by excluding
	//subscript operators
	Init(nm[0],1,100); 	
	Init(nm[1],1,100); 	
	Init(nm[2],1,100); 	
	Init(nm[3],1,100); 	
	Init(nm[4],1,100); 	
	Init(nm[5],1,100); 	
	Init(nm[6],1,100); 	
	Init(nm[7],1,100); 	
	Init(nm[8],1,100); 	
	Init(nm[9],1,100);

	Print(nm[0]); 	
	Print(nm[1]); 	
	Print(nm[2]); 	
	Print(nm[3]); 	
	Print(nm[4]); 	
	Print(nm[5]); 	
	Print(nm[6]); 	
	Print(nm[7]); 	
	Print(nm[8]); 	
	Print(nm[9]); 	 
	
	cout << "\nThe sum of the averages of the first 4 subarrays of nm is " << AvgSum(nm) << "\n";
	
	return 0;
}
