#include"Header.h"
using namespace std;

//Constructor
minHeap::minHeap() {
	size = 0;
	last = -1;
}

//Swap 2 elements
void minHeap::swap(int a, int b) {
	int temp = v[a];
	v[a] = v[b];
	v[b] = temp;

}

//Add more elements
void minHeap::add(int num) {
	int child;
	int parent;

	//Insert new element to the end of the vector
	v.push_back(num);
	size++;
	last = size - 1;

	//Set child and parent position
	child = size - 1;
	parent = (child - 1) / 2;

	//Find the right position for new element
	while (parent >= 0 && v[parent] > v[child]) {
		swap(parent, child);
		child = parent;
		parent = (child - 1) / 2;
	}
}

//Delete the root
void minHeap::deleteRoot() {
	int LIH = 0;
	int left;
	int right;
	int min;
	
	//Swap the root with the last element
	swap(0, last);
	
	//Delete
	v.pop_back();
	size--;
	last = size - 1;

	//Move the new root to the top
	while (true) {
		left = 2 * LIH + 1;
		right = left + 1;
		if (left >= size)
			break;
		min = left;
		if (right < size && v[right] < v[min] )
			min = right;
		if (v[LIH] > v[min]) {
			swap(LIH, min);
			LIH = min;
		}
		else
			break;
	}
	
}

//Check if the heap is empty
bool minHeap::isEmpty() {
	if (size == 0)
		return true;
	return false;
}

//Display all elements in sorted order
void minHeap::print_sorted() {
	cout << endl << "Output in sorted order: " << endl;
	while (size != 0) {
		cout << v[0] << " ";
		deleteRoot();
	}
	cout << endl;
}