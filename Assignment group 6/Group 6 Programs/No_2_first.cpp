#include <iostream>
using namespace std;
int get_even(int number);

int main()
{

	int num;
	cout<<"Enter the number of integers: ";
	cin>>num;

    int all[num];//array for "all" numbers.

	cout << "Enter the integers: ";
	for (int i = 0; i < num; i++)
		cin >> all[i];

	int sum_even = 0, sum_odd = 0, update_even = 0,
        update_odd = 0;

	for (int i = 0; i < num; i++) {
		if (get_even(all[i])) {
			sum_even = sum_even+ all[i];
			update_even++;
			cout << all[i] << " is an even number\n";
		}
		else {
			sum_odd += all[i];
			update_odd++;
			cout << all[i] << " is an odd number\n";
		}
	}

	cout << "There is a total of " << update_odd
		<< " odd numbers and their sum is "
		<< sum_odd << "\n";
	cout << "There is a total of " << update_even
		<< " even numbers and their sum is "
		<< sum_even << endl;

	return 0;
}
int get_even(int number)
{
	if (number % 2 == 0)
		return 1;
	else
		return 0;
}
