// Question: NEARBY CARS
// Based on Car Locations (cx,cy), find *nearest K* cars.
#include <iostream>
#include <queue>
#include <string>
using namespace std;
class Car
{
public:
    int idx;
    int distSq;
    Car(int idx, int distSq)
    {
        this->idx = idx;
        this->distSq = distSq;
    }

    bool operator < (const Car &obj) const{
        return this->distSq > obj.distSq; // minHeap
    }
};
void nearbyCar(vector<pair<int, int>> pos, int K) // O(Kxlogn + n) 
{
    vector<Car> cars;
    for (int i = 0; i < pos.size(); i++) // O(n)
    {
        int distSq = pos[i].first * pos[i].first + pos[i].second * pos[i].second;
        cars.push_back(Car(i, distSq));
    }

    priority_queue<Car> pq(cars.begin(), cars.end()); // O(n)

    for (int i = 0; i < K; i++) // O(Kxlogn)
    {
        cout << "car " << pq.top().idx << endl;
        pq.pop();
    }
}
int main()
{
    vector<pair<int, int>> pos;
    pos.push_back(make_pair(3, 3));
    pos.push_back(make_pair(5, -1));
    pos.push_back(make_pair(-2, 4));

    int k = 2;

    nearbyCar(pos, k);
    return 0;
}