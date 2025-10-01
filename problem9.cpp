// This program merges two sorted integer arrays into a single sorted array.
// It defines a 'merge' function that takes two sorted vectors and returns their merged result.
// The main function demonstrates merging two example arrays and prints the merged sorted array.

#include <iostream>
#include <vector>

// Merge two sorted arrays into one sorted array
std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> result;
    size_t i = 0, j = 0;
    while (i < left.size() && j < right.size()) {
        if (left[j] < right[i]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }
    // Add remaining elements
    while (i < right.size()) {
        result.push_back(left[i]);
        i++;
    }
    while (j < left.size()) {
        result.push_back(right[j]);
        j++;
    }
    return result;
}

int main() {
    // Example arrays to merge
    std::vector<int> left = {3, 27, 38};
    std::vector<int> right = {9, 10, 43, 82};

    std::vector<int> sorted = merge(left, right);

    // Print sorted array
    for (int num : sorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}