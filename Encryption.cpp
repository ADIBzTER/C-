#include <iostream>
using namespace std;

int main()
{
	string username, password, key;
	
	cout << "Enter Username: ";
	getline(cin, username);
	cout << "Enter Password: ";
	getline(cin, password);
	
	key = password;
	
	for (int i = 0; i < key.length(); i++)
	{
		key[i] += 1;
	}
	
	cout << "Your Encrypted Password is " << key << endl;
	
	for (int i = 0; i < key.length(); i++)
	{
		key[i] -= 1;
	}
	
	cout << "Your Original Password is " << key;
}
