#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string ofile,cfile;
	fstream in, out;

	cout << "Enter filename: ";
	cin >> ofile;
	cfile = "c" + ofile;
	in.open(ofile.data(),fstream::in);
	out.open(cfile.data(),fstream::out);

	if(in.is_open())
	{
		string line;

		while(getline(in,line))
		{
			out << line << "\n";
		}
	}
	in.close();
	out.close();
	return 0;
}
