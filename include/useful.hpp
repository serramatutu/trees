#ifndef USEFUL_INCLUDED
#define USEFUL_INCLUDED

#include <fstream>

template <typename T,
          class Less = std::less<T>>
class compare {
    private:
        Less less;
    public:
    int operator()(const T& a, const T& b) const {
        if (less(a, b)) return -1;
        if (less(b, a)) return 1;
        return 0;
    }
};

#endif
