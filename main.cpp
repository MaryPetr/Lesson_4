#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

template<typename Cont, typename T>
void insert_sorted(Cont& container, const T& item) {
    const auto insert_pos = std::lower_bound(std::begin(container), std::end(container), item);
    container.insert(insert_pos, item);
};