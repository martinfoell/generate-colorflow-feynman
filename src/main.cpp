#include <iostream>
#include <vector>

int main() {
    std::vector<int> originalVector = {1, 2, 3, 4, 5, 6, 7, 8};

    // Define the two split indices
    size_t splitIndex1 = 2; // First split index
    size_t splitIndex2 = 5; // Second split index

    // Create three new vectors
    std::vector<int> firstPart;
    std::vector<int> secondPart;
    std::vector<int> thirdPart;

    // Copy elements to the first part
    firstPart.insert(firstPart.begin(), originalVector.begin(), originalVector.begin() + splitIndex1 + 1);

    // Copy elements to the second part
    secondPart.insert(secondPart.begin(), originalVector.begin() + splitIndex1, originalVector.begin() + splitIndex2 + 1);

    // Copy elements to the third part
    thirdPart.insert(thirdPart.begin(), originalVector.begin() + splitIndex2, originalVector.end());

    // Print the three new vectors
    std::cout << "First Part: ";
    for (const auto& num : firstPart) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Second Part: ";
    for (const auto& num : secondPart) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Third Part: ";
    for (const auto& num : thirdPart) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

