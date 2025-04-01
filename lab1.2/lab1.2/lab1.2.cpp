#include <iostream>
#include <vector>
#include <limits>

int findMinPositiveAfterFirstEven(const std::vector<int>& arr) {
    bool foundFirstEven = false;
    int minPositive = std::numeric_limits<int>::max();

    for (int num : arr) {
        if (!foundFirstEven && num % 2 == 0) {
            foundFirstEven = true;
            continue;
        }
        if (foundFirstEven && num > 0 && num < minPositive) {
            minPositive = num;
        }
    }

    return (minPositive == std::numeric_limits<int>::max()) ? -1 : minPositive;
}

int main() {
    int N;
    std::cout << "Enter the size of the array: ";
    std::cin >> N;

    std::vector<int> A(N);
    std::cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    int minPositive = findMinPositiveAfterFirstEven(A);

    if (minPositive == -1) {
        std::cout << "No positive elements found after the first even element." << std::endl;
    }
    else {
        std::cout << "Minimum positive element after the first even element: " << minPositive << std::endl;
    }

    return 0;
}