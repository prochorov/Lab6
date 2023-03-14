#include <iostream>
#include <vector>

class Rectangle {
public:
    Rectangle(double h, double w) : height(h), width(w) {}
    double get_height() const { return height; }
    double get_width() const { return width; }
    double get_area() const { return height * width; }
    bool operator<(const Rectangle& other) const { return get_area() < other.get_area(); }
private:
    double height, width;
};


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
    std::vector<Rectangle> arr = {Rectangle(2.0, 3.0), Rectangle(1.0, 5.0), Rectangle(4.0, 2.0), Rectangle(3.0, 4.0)};
    merge_sort(arr);
    for (const Rectangle& rect : arr) {
        std::cout << "height: " << rect.get_height() << ", width: " << rect.get_width() << ", area: " << rect.get_area() << std::endl;
    }
    return 0;
}
