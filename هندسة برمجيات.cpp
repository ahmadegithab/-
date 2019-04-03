#include <iostream>
#include <list>

using namespace std;

void main()
{

	double amount[4] = { 1000,2000,100000,0 };
	double zkatt[4] = { 250,500,25000,0 };
	
	double zkat;
	double num;
	int n = 1;
	bool r = true;

	for (int i = 0; i < n;)
	{
		cout << "Enter num : ";
		cin >> num;
		if (num == -22)
		{
			n = 0;
			r = false;
		}
		else
		{
			zkat = num * 0.025;
		}

		if (zkat >= 1000 && r == true)
		{
			cout << "The Zakah is: " << zkat << endl;
			cout << "enter number -22" << endl;
		}
		else
		{
			if (r == true)
				cout << "The Zakah is not =1000: " << endl;
		}
	

		// Test

		for (int i = 0; i <= 5;)
		{
			if (num == amount[i])
			{
				if (zkat == zkatt[i])
				{
					cout << " Test is Correct." << endl;
				}
				else
				{
					cout << "Test error, " << endl;
				}
			}	i++;
		}
	}


	system("pause");
}