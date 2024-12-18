#pragma once
#include <isostream>
#include <cstdlib>
#include <list>

using namespace std;

class HashTable
{
	int numkeys;
	list<int>* hashT; // is a value

public:
	HashTable(int numkeys);
	void insertData(int data);
	int hashKey(int data);
	void displayHashTable();
};


