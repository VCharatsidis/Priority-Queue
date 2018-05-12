
#include <iostream>;
#include <string>;
#include <queue>;
#include "Comparator.cpp";
#include <bitset>;
#include <vector>;

using std::vector;
using std::priority_queue;
using std::cout;


int main() {


	//check priority queue
	priority_queue<Box*, vector<Box*>, Comparator> pq;

	Box* a = new Box(1, 2);
	Box* b = new Box(2, 3);
	Box* c = new Box(3, 4);
	Box* d = new Box(4, 5);

	a->available_values = 0b1011;
	b->available_values = 0b100000000000000000001;
	c->available_values = 0b1111;
	d->available_values = 0b1;

	pq.push(a);
	pq.push(b);
	pq.push(c);
	pq.push(d);

	while (!pq.empty()) {
		Box* k = pq.top();
		cout << std::bitset<25>(k->available_values) << std::endl;
		pq.pop();
	}

	return 0;
}