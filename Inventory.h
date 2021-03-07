#pragma once
#include "book.h"
#include <vector>

class Inventory
{
public:
	std::vector<Book> Books;

	void AddBook(Book book);
	void ListAllBooks(void);
	void RemoveBook(Book book);
	Book FindBookByTitle(std::string Title);
	void CheckOutBook(Book book);
	void CheckInBook(Book book);
};