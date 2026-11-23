#include "project/sorting.h"

#include <algorithm>
#include <stdexcept>

std::vector<int> SortingAlgorithms::mergeSort(const std::vector<int>& values) {
    std::vector<int> sorted_values = values;

    if (!sorted_values.empty()) {
        mergeSortRecursive(sorted_values, 0, sorted_values.size() - 1);
    }

    return sorted_values;
}

std::vector<int> SortingAlgorithms::quickSort(const std::vector<int>& values) {
    std::vector<int> sorted_values = values;

    if (!sorted_values.empty()) {
        quickSortRecursive(sorted_values, 0, sorted_values.size() - 1);
    }

    return sorted_values;
}

bool SortingAlgorithms::isSorted(const std::vector<int>& values) {
    for (std::size_t i = 1; i < values.size(); ++i) {
        if (values[i - 1] > values[i]) {
            return false;
        }
    }
    return true;
}

void SortingAlgorithms::mergeSortRecursive(std::vector<int>& values, std::size_t left, std::size_t right) {
    if (left >= right) {
        return;
    }
    std::size_t mid = left + (right - left) / 2;
    mergeSortRecursive(values, left, mid);
    mergeSortRecursive(values, mid + 1, right);
    merge(values, left, mid, right);
}

void SortingAlgorithms::merge(std::vector<int>& values, std::size_t left, std::size_t mid, std::size_t right) {
    std::vector<int> left_half(values.begin() + left, values.begin() + mid + 1);
    std::vector<int> right_half(values.begin() + mid + 1, values.begin() + right + 1);

    std::size_t i = 0, j = 0, k = left;
    while (i < left_half.size() && j < right_half.size()) {
        if (left_half[i] <= right_half[j]) {
            values[k++] = left_half[i++];
        } else {
            values[k++] = right_half[j++];
        }
    }

    while (i < left_half.size()) {
        values[k++] = left_half[i++];
    }

    while (j < right_half.size()) {
        values[k++] = right_half[j++];
    }
}

void SortingAlgorithms::quickSortRecursive(std::vector<int>& values, int low, int high) {
    if (low < high) {
        int pivot_index = partition(values, low, high);
        quickSortRecursive(values, low, pivot_index - 1);
        quickSortRecursive(values, pivot_index + 1, high);
    }
}

int SortingAlgorithms::partition(std::vector<int>& values, int low, int high) {
    int pivot = values[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (values[j] <= pivot) {
            ++i;
            std::swap(values[i], values[j]);
        }
    }
    std::swap(values[i + 1], values[high]);
    return i + 1;
}
