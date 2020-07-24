
#include <iostream>
using namespace std;

int main()
{
	char user1('0'), user2('0'), option('y');

	cout << "Play Rock/Paper/Scissors" << endl;

	while (option == 'y' || option == 'Y')
	{
		cout << "User1 enter (R/P/S): " << endl;
		cin >> user1;

		cout << "User2 enter (R/P/S): " << endl;
		cin >> user2;

		if (user1 == user2)
		{
			cout << "\nTie!" << endl;
		}
		else if ((user1 == 'R' && user2 == 'S') ||
			(user1 == 'P' && user2 == 'R') ||
			(user1 == 'S' && user2 == 'P'))
		{
			cout << "\nUser1 wins!" << endl;
		}
		else
		{
			cout << "\nUser2 wins!" << endl;
		}

		cout << "\nDo you want to keep playing? If yes enter y/Y, if not enter n/N: ";
		cin >> option;
	}

	cout << "\nThank you for playing. Goodbye!" << endl;
	return 0;
}