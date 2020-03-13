#pragma once
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

class minHeap {
	vector<int> v;
	int last;
	int size;

public:

	//Constructor
	minHeap();

	//Swap 2 elements
	void swap(int a, int b);

	//Add more elements
	void add(int num);

	//Delete the root
	void deleteRoot();

	//Get the number of elements
	int get_size() { return size; }

	//Get root
	int get_root() { return v[0]; }

	//Get last
	int get_last() { return v[last]; }

	//Check if the heap is empty
	bool isEmpty();

	//Display all elements in sorted order
	void print_sorted();
};