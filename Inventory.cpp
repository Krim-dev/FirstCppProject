#include "Inventory.h"
#include <iostream>

void Inventory::AddBook(Book book)
{
	Inventory::Books.push_back(book);
}

void Inventory::ListAllBooks(void)
{
	for (Book book : Inventory::Books)
	{
		std::cout << "Title : " << book.Title << "\t";
		std::cout << "Author : " << book.Author << "\n";
	}
}