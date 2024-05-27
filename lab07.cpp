#include <iostream>
#include <vector>

double calculateSumOfOddElements(const std::vector<double>& arr) {
    double sum = 0.0;
    for (double num : arr) {
        if (static_cast<int>(num) % 2 != 0) {
            sum += num;
        }
    }
    return sum;
}


double calculateSumBetweenNegatives(const std::vector<double>& arr) {
    double sum = 0.0;
    bool foundFirstNegative = false;
    for (double num : arr) {
        if (num < 0) {
            if (!foundFirstNegative) {
                foundFirstNegative = true;
            }
            else {
                break;
            }
        }
        else if (foundFirstNegative) {
            sum += num;
        }
    }
    return sum;
}

/**
* Removes elements from the array whose absolute value is less than or equal to the specified threshold.
* The freed up positions at the end of the array are filled with zeros.
*
* @param arr The input array.
* @param threshold The threshold value for removing elements.
*/
void removeElementsAndFillZeros(std::vector<double>& arr, double threshold) {
    int writeIndex = 0;
    for (int readIndex = 0; readIndex < arr.size(); readIndex++) {
        if (std::abs(arr[readIndex]) > threshold) {
            arr[writeIndex++] = arr[readIndex];
        }
    }
    while (writeIndex < arr.size()) {
        arr[writeIndex++] = 0.0;
    }
}

int main() {
    int N;
    std::cout << "Enter the size of the array: ";
    std::cin >> N;

    std::vector<double> arr(N);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    double sumOfOddElements = calculateSumOfOddElements(arr);
    std::cout << "Sum of elements with odd values: " << sumOfOddElements << std::endl;

    double sumBetweenNegatives = calculateSumBetweenNegatives(arr);
    std::cout << "Sum of elements between the first and last negative elements: " << sumBetweenNegatives << std::endl;

    double threshold;
    std::cout << "Enter the threshold value: ";
    std::cin >> threshold;

    removeElementsAndFillZeros(arr, threshold);

    std::cout << "Modified array: ";
    for (double num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}