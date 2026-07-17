// Question: Interleave 2 halves of a queue of even size.
// Example: 1 2 3 4 5 6 7 8 9 10
// output:  1 6 2 7 3 8 4 9 5 10

#include <iostream>
#include <queue>
using namespace std;
void interleave2Q(queue<int> &q)
{
    int n = q.size();
    queue<int> first;
    for (int i = 0; i < n / 2; i++)
    {
        first.push(q.front());
        q.pop();
    }
    while (!first.empty())
    {
        q.push(first.front());
        first.pop();
        q.push(q.front());
        q.pop();
    }
}
int main()
{
    queue<int> q;
    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }
    interleave2Q(q);
    for (int i = 1; i <= 10; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}