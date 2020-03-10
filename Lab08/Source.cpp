#include"Header.h"

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

}

//Check if the heap is empty
bool minHeap::isEmpty() {
	if (size == 0)
		return true;
	return false;
}