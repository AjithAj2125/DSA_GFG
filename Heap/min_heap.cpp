#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
class minheap
{
public:
 int *a, size, capacity;
 minheap(int c)
 {
  a = new int[c];
  capacity = c;
  size = 0;
 }
 int left(int i) { return (2 * i + 1); }
 int right(int i) { return (2 * i + 2); }
 int parent(int i) { return (i - 1) / 2; }

 void heapinsert(int x)
 {
  if (size == capacity)
   return;
  size++;
  a[size - 1] = x;
  for (int i = size - 1; i != 0 && a[parent(i)] > a[i];)
  {
   swap(a[i], a[parent(i)]);
   i = parent(i);
  }
 }
 void minheapify(int i)
 {
  int lt = left(i), rt = right(i);
  int smallest = i;
  if (lt < size && a[lt] < a[i])
   smallest = lt;
  if (rt < size && a[rt] < a[i])
   smallest = rt;
  if (smallest != i)
  {
   swap(a[smallest], a[i]);
   minheapify(smallest);
  }
 }
 int extractmin()
 {
  if (size == 0)
   return INT_MIN;
  if (size == 1)
  {
   size--;
   return a[0];
  }

  swap(a[0], a[size - 1]);
  size--;
  minheapify(0);
  return a[size];
 }
 void printheap()
 {
  cout << "Elements in Heap : ";
  for (int i = 0; i < size; i++)
  {
   cout << a[i] << " ";
  }
  cout << endl;
 }
 void changekey(int i, int ele)
 {
  a[i] = ele;
  while (i != 0 && a[i] < a[parent(i)])
  {
   swap(a[i], a[parent(i)]);
   i = parent(i);
  }
 }
 void deletekey(int i)
 {
  changekey(i, INT_MIN);
  extractmin();
 }
};
int main()
{
 minheap h(11);
 h.heapinsert(4);
 h.heapinsert(13);
 h.heapinsert(15);
 h.heapinsert(12);
 h.heapinsert(3);
 h.heapinsert(34);
 h.heapinsert(22);
 h.heapinsert(19);
 h.heapinsert(11);
 h.printheap();
 cout << "min element removed : " << h.extractmin() << endl;
 cout << "After min element removal, ";
 h.printheap();
 h.changekey(2, 5);
 h.printheap();
 h.deletekey(3);
 return 0;
}