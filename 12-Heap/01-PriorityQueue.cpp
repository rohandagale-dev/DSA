#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Min-heap using priority_queue
    std::priority_queue<int, vector<int>, greater<int>> minHeap;

    // Insert elements
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(2);

    // Print and extract elements
    std::cout << "Min-Heap elements (extracted): ";
    while (!minHeap.empty()) {
        std::cout << minHeap.top() << " ";
        minHeap.pop();
    }

    cout<<minHeap.top()<<endl;
    return 0;
}


// priority queue is max heap by default
// to make it min heap we use greater<int> as third argument
// priority_queue<int, vector<int>, greater<int>> minHeap; // min heap

