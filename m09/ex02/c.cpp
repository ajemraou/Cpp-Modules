#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> sortedVector = {1, 3, 5, 7, 9};
    int newValue = 4;  // Value to insert

    // Use std::upper_bound to find the position where 'newValue' should be inserted
    auto it = std::upper_bound(sortedVector.begin(), sortedVector.end(), newValue);

    // Insert 'newValue' at the calculated position
    sortedVector.insert(it, newValue);

    // Display the updated sorted vector
    for (const int& value : sortedVector) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
