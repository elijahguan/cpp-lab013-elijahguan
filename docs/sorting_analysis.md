# Sorting Algorithms Laboratory

## Objective
This lab focuses on two classic divide-and-conquer sorting strategies:

- merge sort
- quick sort

Students must implement both algorithms, compare their behavior, and reason about their asymptotic complexity.

## Required tasks
Students must implement the following operations:

- `mergeSort(values)`
- `quickSort(values)`
- helper routines for merge and partition logic
- checks for whether a vector is sorted

## Analysis expectations
Students should explain:

- the runtime complexity of merge sort in best, average, and worst cases;
The time complexity of merge sort in all three cases is O(n log n) because the list is repeatedly split in half, and after sort, takes O(n) to merge all elements back together.
- the runtime complexity of quick sort in best, average, and worst cases;
The time complexity of quick sort in the best and average case is O(n log n) when the partition divides the vector into a balanced sections and in the worst case is O(n^2) if the partitions are unbalanced.
- why merge sort is stable and quick sort is often faster in practice on average;
Merge sort is more stable because it keeps the relative order if two numbers are equal. However, quick sort may flip them out of relative order. Nevertheless, quick sort usually takes less memory than merge sort.
- space complexity differences between the two algorithms;
In terms of auxiliary-space complexity, merge sort takes an extra O(n) time complexity, since it adds all the values from the unsorted vector into the sorted vector. Quick sort uses the partion and pivot points to sort the vector in-place.
- the effect of pivot selection on quick sort performance;
Pivot selection affects the performance since if the pivot point is near the middle, it will likely result in more balanced partitions.
- when each algorithm is preferable for different input distributions.
Merge sort is better when there are a lot of duplicates of a number and when the O(n log n) guaranteed time is important. Quick sort can be preferable when the values are distributed randomly and space complexity is an important consideration.

## Important comparison points
Students should discuss:

- recursive structure and recursion depth;
Merge Sort:
Quick Sort:
- whether the algorithm is in-place or requires auxiliary storage;
Merge Sort:
Quick Sort:
- worst-case behavior on already sorted or reverse-sorted inputs;
Merge Sort:
Quick Sort:
- the role of partitioning in quick sort; Quick sort requires partitioning to split the unsorted vector into two smaller vectors, where the values smaller than the pivot are on the left and values greater than the pivot are on the right. Then, once the pivot is in its proper order, the recursion chooses pivots for the two subvectors.
- how merge sort handles duplicates and large input sizes efficiently.

