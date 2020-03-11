#include "Header.h"

//Question 1
void Q1() {
	minHeap myHeap;
	int num;
	int size = 5;

	//Add 5 elements to the heap
	cout << "Enter " << size << " numbers: ";
	for (int i = 1; i <= size; i++) {
		cin >> num;
		myHeap.add(num);
	}

	//Output information
	cout << endl << "Before deleting" << endl;
	cout << "Heap size: " << myHeap.get_size() << endl;
	cout << "Root: " << myHeap.get_root() << endl;
	cout << "Last: " << myHeap.get_last() << endl;

	//Delete the root
	myHeap.deleteRoot();

	//Output information
	cout << endl << "After deleting" << endl;
	cout << "Heap size: " << myHeap.get_size() << endl;
	cout << "Root: " << myHeap.get_root() << endl;
	cout << "Last: " << myHeap.get_last() << endl;
	
}

int main() {

	Q1();

	system("pause");
	return 0;
}