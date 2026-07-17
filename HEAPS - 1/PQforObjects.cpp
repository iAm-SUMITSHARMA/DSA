#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
class Student
{ // (less than operator overload) -> "<" overload
public:
    string name;
    int marks;
    Student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }

    bool operator<(const Student &obj) const
    {
        return this->marks < obj.marks; // max heap:  descending order
    }
};
int main()
{
    priority_queue<Student> pq;
    pq.push(Student("rashmika", 85));
    pq.push(Student("sumit", 95));
    pq.push(Student("manoj", 65));

    while (!pq.empty())
    {
        cout << "Top student: " << pq.top().name << " with marks- " << pq.top().marks << endl;
        pq.pop();
    }
}