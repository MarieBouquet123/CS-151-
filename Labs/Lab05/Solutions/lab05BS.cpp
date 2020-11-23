#include <iostream>
#include <string>
using namespace std;

int Range(const int data[])
{
	int mx, mn;

	if(data[0] < data[1])
	{
		mn = data[0];
		mx = data[1];
	}
	else
	{
		mn = data[1];
		mx = data[0];
	}

	if(data[2] < mn)
	{
		mn = data[2];
	}
	else if(data[2] > mx)
	{
		mx = data[2];
	}

	if(data[3] < mn)
	{
		mn = data[3];
	}
	else if(data[3] > mx)
	{
		mx = data[3];
	}

	if(data[4] < mn)
	{
		mn = data[4];
	}
	else if(data[4] > mx)
	{
		mx = data[4];
	}
	return (mx - mn);
}

void Print(const int a[])
{
	cout << "[" << a[0] << "," << a[1] << "," << a[2] << "," << a[3] << "," << a[4] << "]";
}
 
int main() 
{
	int data[5], rg;

	for(int i = 0;i < 5;i += 1)
	{
		data[0] = i + 1;

		for(int j = 0;j < 5;j += 1)
		{
			if(j == i)
			{
				continue;
			}
			data[1] = j + 1;
		
			for(int k = 0;k < 5;k += 1)
			{
				if(k == j || k == i)
				{
					continue;
				}
				data[2] = k + 1;

				for(int l = 0;l < 5;l += 1)
				{
					if(l == k || l == j || l == i)
					{
						continue;
					}
					data[3] = l + 1;

					for(int m = 0;m < 5;m += 1)
					{
						if(m == l || m == k || m == j || m == i)
						{
							continue;
						}
						data[4] = m + 1;
						rg = Range(data);
						Print(data);
						cout << " Range: " << rg << "\n";
					}	
				}
			}
		}
	}				
	return 0;
}
