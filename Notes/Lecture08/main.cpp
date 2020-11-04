/**********************************************************
* Lecture 08: A structure creates abstract data types 
* which are programmer defined data types that consists
* of data memebers which can be variables, arrays and 
* pointers with types being either primitive and abstract 
**********************************************************/ 
#include <iostream>
#include <string>
#include <sstream> //stringstream
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

/********************************************************
* A structure definition (or declaration)
********************************************************/
struct Clock
{
	int hour;
	int minute;
	int second;
};


/*******************************************************
* Structure objects as parameters
*******************************************************/
//An abstract data types do not work with relational,
//logical and arithmetic operations
int Compare(Clock& a,Clock& b)
{
	if(a.hour == b.hour)
	{
		if(a.minute == b.minute)
		{
			return (a.second - b.second);
		}
		else 
		{
			return (a.minute - b.minute);
		}
	}
	else
	{
		return (a.hour - b.hour);
	}
}

string ToString(const Clock& a)
{
	//string stream object
	//It can be used like the cin and cout objects
	stringstream out;

	out << setfill('0');
	out << setw(2) << a.hour << ":" << setw(2) << a.minute << ":" << setw(2) << a.second;
	return out.str();
}

/**********************************************************
* Structure type as a return type
**********************************************************/
Clock TimeZone(const Clock& time,string zone)
{
	//It assumes the time is the GMT 
	Clock ntime = time;
	if(zone == "PST" || zone == "pst")
	{
		ntime.hour = (ntime.hour + 16) % 24; //GMT-8 
	}
	else if(zone == "MST" || zone == "mst")
	{
		ntime.hour = (ntime.hour + 17) % 24; //GMT-7
	}
	else if(zone == "CST" || zone == "cst")
	{
		ntime.hour = (ntime.hour + 18) % 24; //GMT-6
	}
	else if(zone == "EST" || zone == "est")
	{
		ntime.hour = (ntime.hour + 19) % 24; //GMT-5
	}
	return ntime;
}

string To12Hour(const Clock& a)
{
	Clock ca = a;
	string str;

	if(ca.hour == 0 || ca.hour > 12)
	{
		ca.hour = ((ca.hour == 0)?(12):(ca.hour % 12));
		str = ToString(ca);
		str = str + ((ca.hour == 12)?(" AM"):(" PM"));
	}
	else 
	{
		str = ToString(ca);
		str = str + ((ca.hour == 12)?(" PM"):(" AM"));
	}
	return str;
}

int main()
{
	srand(time(NULL));
	Clock a, b, times[20];

	//Initialization of struct objects use an initilization
	//list. The members must be initialized in the same order
	//as in their declarations in the struct definition. For
	//instance, the first argument will initialize hour, the
	//second argument will initialize minute, and the third
	//argument will initialize second for a Clock object
 	Clock c = {9,40,0};
	
	cout << ToString(c) << "\n";

	//You assign values to a struct object either by assigning
	//a value to each member individually or by assigning it
	//another struct object.
	a.hour = 8;
	a.minute = 0;
	a.second = 0;

	b = c;

	for(int i = 0;i < 20;i += 1)
	{
		times[i].hour = rand() % 24;
		times[i].minute = rand() % 60;
		times[i].second = rand() % 60;
	}

	//You cannot display the values of the 
	//data members of a struct object with 
	//it name. It will produce an error.
	//cout << a << "\n"; //error

	//The view its members, you need to do it 
	//individually
	cout << setfill('0'); 
	cout << setw(2) << a.hour << ":" << setw(2) << a.minute << ":" << setw(2) << a.second << "\n";
	cout << ToString(b) << "\n\n";

	for(int i = 0;i < 20;i += 1)
	{
		cout << ToString(times[i]) << " (" << To12Hour(times[i]) << ")\n";
	}

	Clock mx = times[0], mn = times[0];

	for(int i = 1;i < 20;i += 1)
	{
		if(Compare(mx,times[i]) < 0)
		{
			mx = times[i];
		}
		else if(Compare(mn,times[i]) > 0)
		{
			mn = times[i];
		}
	}

	cout << ("Latest Time: " + ToString(mx)) << ("\nEarliest Time: " + ToString(mn)) << "\n";

	Clock gmt = {0,0,0};
	cout << "\nIf GMT is 00:00:00 (" << To12Hour(gmt) << "), then\n";

	string tz[4] = {"PST","MST","CST","EST"};

	for(int i = 0;i < 4;i += 1)
	{
		cout << tz[i] << " is " << ToString(TimeZone(gmt,tz[i])) << " (" << To12Hour(TimeZone(gmt,tz[i])) << ")\n";
	}
	
	return 0;
}

