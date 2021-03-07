#include <iostream>
#include <string>
#include "Inventory.h" 
#include "book.h"

using namespace std;

int input;
Inventory _inventory;

int main()
{
	while(true)
	{
		cout << "Choose an option.\n";
		cout << "1. Add Book\n";
		cout << "2. List All Books\n";
		cout << "3. Check out Book\n";
		cout << "4. Check in book\n";

		cout << "0. Exit\n";
		scanf("%d", &input);
		cin.ignore();
		switch(input)
		{
			case 0:
				printf("Thank you. Goodbye\n");
				return 0;
			case 1:
			{
				printf("Title: ");
				string title;
				getline(cin, title);

				printf("\nauthor :");
				string author;
				getline(cin, author);
				
				int id = _inventory.Books.size() + 1;
				Book newBook(id, title, author);

				_inventory.AddBook(newBook);
				break;
			}
			case 2:
				_inventory.ListAllBooks();
			case 3:
				break;
			case 4:
				break;
			default:
			printf("Invalid Selection try again\n");
			break;
		}
	}
}