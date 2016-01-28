#pragma once

#include <iostream>
#include <array>

using namespace std;

template<class T>
class MagicBag
{
private:
    T bag_arr[0];
public:

    MagicBag()
    {
        bag_arr[0] = 0;
    }

    // Copy constructor
    MagicBag(const MagicBag &other)
    {
    }

    // = comparator overloading
    MagicBag &operator=(const MagicBag &other)
    {
    }

    // desctructor
    ~MagicBag()
    {
    }

    void insert(T item)
    {
        cout << sizeof(bag_arr)/sizeof(bag_arr[0]);
    }

    T draw()
    {
    }

    int peek(T item)
    {
    }

private:

    friend ostream &operator<<(ostream &os, const MagicBag &mb)
    {
    }
};