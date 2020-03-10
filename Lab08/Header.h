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

	//Check if the heap is empty
	bool isEmpty();
};