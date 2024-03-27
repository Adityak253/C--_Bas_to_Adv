#include <iostream>

int summing(int arr[], int start, int end) {
    int sum = 0;
    for (int i = start; i < end; i++) {
        sum += arr[i];
    }
    return sum;
}

bool splicing(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (summing(arr, 0, i) == summing(arr, i, size)) {
            return true;
        }
    }
    return false;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    std::cout << "The array is:" << std::endl;
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    std::cout << "Check value: " << (splicing(arr, size) ? "true" : "false") << std::endl;

    delete[] arr;
    return 0;
}
