// size_capacity.cpp
// Vector size versus capacity

#include <vector>
#include <iostream>

using namespace std;

// Exercise 2.1
// Vector size: This is the number of elements that we have inserted in the vector.
// Vector Capacity: The number of elements that our vector can store before having to resize.

// The Capacity doubles as soon as the vector reaches maximum capacity. This is because growing is
// an expensive operation as it requires copying the whole vector container. By doubling the number
// of copying times are reduced to a level that makes a vector an efficient.


int main()
{
    vector<int> vec;
    cout << "vec: size: " << vec.size() 
         << " capacity: " << vec.capacity() << endl;

    for(int i = 0; i < 24; i++) {
        vec.push_back(i);
        cout << "vec: size: " << vec.size() 
             << " capacity: " << vec.capacity() << endl;
    }

    return 0;
}
