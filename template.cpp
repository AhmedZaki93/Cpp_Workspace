// this simple example of template in C++
#include <string>
#include <iostream>
using namespace std;

// Create class
template <typename T, int N>
class Container
{
private:
    T _Array[N];

public:
    int Get_size() const { return sizeof(_Array); }
};

int main()
{
    Container<char, 10> box;
    cout << "Size is " << box.Get_size() << endl;
    return 0;
}