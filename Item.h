#include <stdio.h>
using namespace std;
template <class T>
class Item{
    private:
    T value;
    public:
    Item(T value);
    T getValue();
    void setValue(T value);

};