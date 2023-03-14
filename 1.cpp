#include <iostream>
#include <vector>


template <typename T>
void merge_sort(std::vector<T>& arr) {
    if (arr.size() <= 1) {
        return;
    }

    std::vector<T> left, right;
    int mid = arr.size() / 2;

    for (int i = 0; i < mid; ++i) {
        left.push_back(arr[i]);
    }

    for (int i = mid; i < arr.size(); ++i) {
        right.push_back(arr[i]);
    }

    merge_sort(left);
    merge_sort(right);

    int i = 0, j = 0, k = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            arr[k] = left[i];
            ++i;
        } else {
            arr[k] = right[j];
            ++j;
        }
        ++k;
    }

    while (i < left.size()) {
        arr[k] = left[i];
        ++i;
        ++k;
    }

    while (j < right.size()) {
        arr[k] = right[j];
        ++j;
        ++k;
    }
}
int main() {
    std::vector<int> int_arr = {4, 2, 1, 5, 3};
    merge_sort(int_arr);
    for (int x : int_arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::vector<double> double_arr = {3.14, 1.23, 2.71, 0.99, 2.45};
    merge_sort(double_arr);
    for (double x : double_arr) {
        std::cout << x << " ";}
}
