#include <iostream>
#include <algorithm>
using namespace std;
class maxheap
{
public:
    int *a, size, capacity;
    maxheap(int x)
    {
        a = new int[x];
        capacity = x;
        size = 0;
    }
    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    int parent(int i) { return ((i - 1) / 2); }

    void insert_heap(int x)
    {
        if (size != capacity)
        {
            size++;
            a[size - 1] = x;
            for (int i = size - 1; i != 0 && a[parent(i)] < a[i];)
            {
                swap(a[i], a[parent(i)]);
                i = parent(i);
            }
        }
    }
    void print_heap()
    {
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
    }
};
int main()
{
    maxheap H(10);
    H.insert_heap(12);
    H.insert_heap(11);
    H.insert_heap(01);
    H.insert_heap(2);
    H.insert_heap(122);
    H.insert_heap(5);
    H.print_heap();

    return 0;
}