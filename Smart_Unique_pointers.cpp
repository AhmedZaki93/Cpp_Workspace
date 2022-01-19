#include <iostream>
#include <string>
#include <memory>
using namespace std;

class MyClass
{
    string _data;

public:
    // default
    MyClass() {}
    MyClass(string name)
    {
        _data = name;
    }
    void set(string name)

    {
        _data = name;
    }
    // destructor
    ~MyClass()
    {
        // delete of heap allocation is done by unique ptr handling
        cout << "Destroyed name of " << _data << endl;
    }
};

int main()
{
    // declare first Unique pointer with Default constructor
    std::unique_ptr<MyClass> origin(new MyClass());
    std::unique_ptr<MyClass> Copy(new MyClass("Copy"));

    // access unique pointer members
    Copy->set("modified");
    // equating both unique pointers' COntents
    *origin = *Copy;

    //Display both pointers Contents
    cout << "Origin object at Heap Address " << origin.get() << " AND Copy Heap  address is " << Copy.get() << endl;

    return 0;
}