#pragma once

#include <algorithm>

template <typename Type1, typename Type2, typename Type3>

class DataType
{
public:
    DataType(Type1 a, Type2 b) : a(a), b(b) {}

    Type3 Min() {
        if (a < b) {
            return static_cast<Type3>(a);
        }
        else {
            return static_cast<Type3>(b);
        }
    }

private:
    Type1 a;
    Type2 b;
};