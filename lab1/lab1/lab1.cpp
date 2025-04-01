#include <iostream>
#include <vector>

void removePositiveElements(std::vector<int>& arr) {
    std::vector<int> result;
    for (int num : arr) {
        if (num <= 0) {
            result.push_back(num);
        }
    }
    arr = result;
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

    removePositiveElements(A);

    std::cout << "Array after removing positive elements: ";
    for (int num : A) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}