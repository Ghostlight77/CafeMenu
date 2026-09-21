#include <iostream>
#include <vector>
#include <array>
#include <string>

using namespace std;

int main()
{
	cout << "CAMPUS CAFE WEEKLY SPECIALS\n"
		<< "-----------------------------\n";

	vector<string> specials {"Grilled Cheese", "Chicken Wrap", "Taco Bowl", "BBQ Sandwich", "Personal Pizza", "Chicken Alfredo", "Burger Basket"};

	// practice using an iterator to point to and print out container values
	vector<string>::iterator iter;
	//auto iter; same same

	cout << "AVAILABLE SPECIALS\n"
		<< "-------------------\n";

	for (iter = specials.begin(); iter != specials.end(); iter++)
	{
		//point element; dereference access
		cout << *iter << endl;
	}

	iter = specials.begin();
	iter++;

	cout << "\nTuesday's special: " << *iter << endl;

	array<string, 7> days {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	// combine the array and vector by position
	cout << "\nWEEKLY MENU\n"
		<< "--------------------\n";

	for (int i = 0; i < days.size(); i++)
	{
		cout << days[i] << ": " << specials[i] << endl;
	}

	return 0;
}
