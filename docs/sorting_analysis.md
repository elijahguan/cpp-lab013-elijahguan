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
In terms of auxiliary-space complexity, merge sort takes an extra O(n) space complexity, since it adds all the values from the unsorted vector into the sorted vector. Quick sort uses the partion and pivot points to sort the vector in-place.
- the effect of pivot selection on quick sort performance;
Pivot selection affects the performance since if the pivot point is near the middle of the value range, it will likely result in more balanced partitions.
- when each algorithm is preferable for different input distributions.
Merge sort is better when the O(n log n) guaranteed time is important. Quick sort can be preferable since it is usually faster when a good pivot is chosen, the values are distributed randomly, and space complexity is an important consideration. In-place partitioning copies less data since it doesn't make an extra array like merge sort.

## Important comparison points
Students should discuss:

- recursive structure and recursion depth;
Merge Sort: Merge sort divides the vector recursively into two halves until each subvector only contains one element. Then, it will merge the vectors in sorted order. Its recursion depth is O(log n).
Quick Sort: Quick sort chooses a pivot and partitions smaller elements on left and bigger elements on right, sorting them recursively. Its recursion depth is O(log n) in the expected and best case, but if the partition is bad (ie always largest or smallest element) it can be O(n).
- whether the algorithm is in-place or requires auxiliary storage;
Merge Sort: Merge sort requires auxiliary storage to store the values in sorted order. It takes O(n) space where n is the number of elements.
Quick Sort: Quick sort uses an in-place implementation by partitioning the vector and moving the values around the pivot. 
- worst-case behavior on already sorted or reverse-sorted inputs;
Merge Sort: In the best, expected, and worst case, merge sort will always take O(n log n) time, so there is no difference between the inputs.
Quick Sort: If quick sort always chooses the first or last element as its pivot, it will create unbalanced partitions that can lead to O(n^2) time. If pivots are chosen correctly, the chances of this occuring will decrease.
- the role of partitioning in quick sort; Quick sort requires partitioning to partitions the original vector into two ranges, where the values smaller than the pivot are on the left and values greater than the pivot are on the right. Then, once the pivot is in its proper order, the recursion chooses pivots for the two subvectors.
- how merge sort handles duplicates and large input sizes efficiently.
Merge sort handles duplicates and large input sizes by comparing values as it merges the sorted subvectors. If values from the left half are taken first, the original order is preserved which makes the sort stable. Its O(n log n) sorting time makes it efficient for large inputs regardless of order.
