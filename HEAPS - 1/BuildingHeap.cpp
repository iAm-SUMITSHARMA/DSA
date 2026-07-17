#include <iostream>
#include <queue>
#include <string>
using namespace std;
class Heap
{
    vector<int> vec; // CBT
public:
    void push(int val) // TC : O(logn)
    {
        // step 1:push val at back
        vec.push_back(val);
        // step 2: fix heap
        int x = vec.size() - 1;
        int parentIdx = (x - 1) / 2;
        while (parentIdx >= 0 && vec[x] > vec[parentIdx]) // TC : O(logn)
        {
            swap(vec[x], vec[parentIdx]);
            x = parentIdx;
            parentIdx = (x - 1) / 2;
        }

        // TO CREATE MIN HEAP:
        // while (parentIdx >= 0 && vec[x] < vec[parentIdx]) // TC : O(logn)
        // {
        //     swap(vec[x], vec[parentIdx]);
        //     x = parentIdx;
        //     parentIdx = (x - 1) / 2;
        // }
    }
    void heapify(int i)
    { // i = parent Index
        if (i >= vec.size())
        {
            return;
        }

        int l = 2 * i + 1;
        int r = 2 * i + 2;

        int maxIdx = i;
        if (l < vec.size() && vec[l] > vec[maxIdx])
        {
            maxIdx = l;
        }
        if (r < vec.size() && vec[r] > vec[maxIdx])
        {
            maxIdx = r;
        }

        swap(vec[i], vec[maxIdx]);
        if (maxIdx != i)
        {
            heapify(maxIdx);
        }
    }
    void pop()
    {
        if (empty())
        {
            cout << "Heap is empty.. come from pop function\n";
            return;
        }
        // step 1 : swap
        swap(vec[0], vec[vec.size() - 1]);

        // step 2 : delete last node
        vec.pop_back();

        // step 3: fix Heap with heapify function
        heapify(0); // O(logn)
    }
    int top() // O(1)
    {
        if (empty())
        {
            throw runtime_error("Heap is empty");
        }

        return vec[0]; // highest priority element
    }
    bool empty()
    {
        return vec.size() == 0;
    }
};
int main()
{
    Heap heap;
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);
    while (!heap.empty())
    {
        cout << "top = " << heap.top() << endl;
        heap.pop();
    }
}