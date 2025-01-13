#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 4, 4, 6, 8, 10};
    
    // Let's say we want to find the upper bound of the value 4.
    auto it = std::upper_bound(v.begin(), v.end(), 4);
    
    if (it != v.end()) {
        std::cout << "The first element greater than 4 is: " << *it << std::endl;
    } else {
        std::cout << "No element is greater than 4." << std::endl;
    }

    return 0;
}
