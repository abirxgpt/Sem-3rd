# Sorting Algorithms
A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.            

For Example: The below list of characters is sorted in increasing order of their ASCII values. That is, the character with a lesser ASCII value will be placed first than the character with a higher ASCII value.       
Unsorted Array: [234, 346, 55, 56, 76, 935, 2, 12]            
Sorted Array:   [2, 12, 55, 56, 76, 234, 346, 935]                 

## Bubble Sort:       
+ It is the Simplest sorting algorithm used.         
+ Is is done by repeatedly swapping the adjacent element in the array till the Array is sorted
+ It can't be worked on large datas cause of it's average & worst-case time complexity is very high.

**Process of Bubble Sort**
+ First Let's start from the beginning.
+ Compare the first two Elements in the array, If the First Element is Greater than Second Swap them
+ Compare the Second and Third Element now, Again  if the Second is greater than Third Swap them
+ by Doing this After First Pass the Largest Element will be in the End of the Array.
+ Now Again Start the Pass but leave the Last Element as it is already at the end & is the largest.
+ by this we can sort the whole array

**Example**
#### Let's Take a Array: [5, 2, 8, 3, 1]

+ First pass:

> Compare 5 and 2. Since 5 > 2, swap them: [2, 5, 8, 3, 1]  
> Compare 5 and 8. No swap needed.  
> Compare 8 and 3. Since 8 > 3, swap them: [2, 5, 3, 8, 1]  
> Compare 8 and 1. Since 8 > 1, swap them: [2, 5, 3, 1, 8]  
+ Second pass:  

> Compare 2 and 5. No swap needed.  
> Compare 5 and 3. Since 5 > 3, swap them: [2, 3, 5, 1, 8]  
> Compare 5 and 1. Since 5 > 1, swap them: [2, 3, 1, 5, 8]  
+ Third pass:  

> Compare 2 and 3. No swap needed.  
> Compare 3 and 1. Since 3 > 1, swap them: [2, 1, 3, 5, 8]  
+ Fourth pass:  

> Compare 2 and 1. Since 2 > 1, swap them: [1, 2, 3, 5, 8]   

#### Now, the list is sorted: [1, 2, 3, 5, 8].  

<u> **Complexity of Bubble Sort:** </u>  
Time Complexity: $O(N^2)$  
Auxiliary Space: $O(1)$  

**Advantages of Bubble Sort:**  
= It is easy to Understand and Implement.  
= It works the same of Pretty Much everything.  
= It doesn't Require Additional Memory Space.  
= It is a stable sorting algorithm.  

**Disadvantages of Bubble Sort:**  
= It's Time Complexity is Very High so it's not Really Good for Larger Data Sets.  
= It is a comparison based Algorithm so it Needs a Comparison Operator for the Data.  

### Algorithm for Bubble Sort
```
1. Start
2. Repeat steps 3-6 for each pass from 1 to n-1 (where n is the number of elements in the array)
3.   Set swapped to false
4.   Repeat steps 5-7 for each pair of adjacent elements from 0 to n-pass-1
5.     If array[i] > array[i+1], then
6.       Swap array[i] and array[i+1]
7.       Set swapped to true
8.   If swapped is false, then
9.     Exit loop (the array is sorted)
10.  End Repeat
11. End Repeat
12. End
```
## Insertion Sort:
+ It is One of the Simplest sorting algorithm used.
+ Is is done by Building Sorted List one Element at a time.
+ One Element is removed from the List and Then it is Inserted to it's Correct Position after Comparing.

**Process of Insertion Sort**
+ Imagine we Have a Deck of Cards and we want to Sort it from smallest to largest.
+ First we will Take the Second Card (The First card is considered as sorted).
+ Then we will Compare it to the cards in our Left hand if the card is smaller than the first it is put to the left side.
+ otherwise it will go to the Right Side.
+ We will do this for all the remaining Elements in the array and by Making space for every element in it's Correct Position.

**Example**
#### Initial array: [7, 3, 9, 5, 4]

+ Step 1: Start with the second element (3).
> Compare 3 with 7. Since 3 < 7, 7 shifts to the right.  
> Place 3 in the correct position, before 7.  
> Array after step 1: [3, 7, 9, 5, 4]  

+ Step 2: Move to the third element (9).  
> Compare 9 with 7. Since 9 > 7, no swap needed.  
> 9 remains in its position.  
> Array after step 2: [3, 7, 9, 5, 4]  

+ Step 3: Move to the fourth element (5).  
> Compare 5 with 9. Since 5 < 9, 9 shifts to the right.  
> Compare 5 with 7. Since 5 < 7, 7 shifts to the right.  
> Place 5 in the correct position, before 7 and after 3.  
> Array after step 3: [3, 5, 7, 9, 4]  
  
+ Step 4: Move to the fifth element (4).  
> Compare 4 with 9. Since 4 < 9, 9 shifts to the right.  
> Compare 4 with 7. Since 4 < 7, 7 shifts to the right.  
> Compare 4 with 5. Since 4 < 5, 5 shifts to the right.  
> Place 4 in the correct position, before 5 and after 3.  

+ Array after step 4: [3, 4, 5, 7, 9]  
#### Now, the array is sorted: [3, 4, 5, 7, 9].  


<ins>**Complexity of Insertion Sort:**</ins>  
Time Complexity: $O(N^2)$  
Auxiliary Space: $O(1)$  

**Advantages of Insertion Sort:**  
= It is easy to Understand and Implement.  
= It doesn't Require Additional Memory Space, As it works directly on the Input.
= It is a stable sorting algorithm.
= It is Efficient for Smaller Lists and Mostly Sorted Lists.

**Disadvantages of Insertion Sort:**  
= It's Time Complexity is Very High so it's not Really Good for Larger Data Sets.  
= Not Suitable for Reverse Sorting of the Lists

### Algorithm for Bubble Sort
```
1. Start
2. Repeat steps 3-7 for each element i from 1 to n-1 (where n is the number of elements in the array)
3.   Set current element as array[i]
4.   Set j as the index of the element before i
5.   Repeat step 6 while j is greater than or equal to 0 and array[j] is greater than the current element
6.     Shift array[j] to the right by one position (array[j+1] = array[j])
7.     Decrement j by 1
8.   Set array[j+1] as the current element
9. End Repeat
10. End Repeat
11. End
```

## Selection Sort: 
+ It is Efficient & Simple sorting algorithm.
+ Is is done by Repeatedly Selecting the Smallest/Largest Element From the unsorted list.   
+ Then it is Put in the Sorted Spot of the Element.

**Process of Selection Sort**
+ First we select whole array as unsorted.
+ Then we take the first array as the `minimum`.
+ Then we compare it to next element and if it's less than first element then it is set as `minimum`.
+ or if it's not less than it compares to the next element than that.
+ After every iteration the minimum is moved to the first place where it is started.
+ After every iteration we start from the next element (for example: i=1 we use arr[0], for i=1 we use arr[1])

**Example**
#### Initial array: [7, 2, 8, 6, 3]

+ Step 1: Find the smallest element in the entire array and swap it with the first element.
> The smallest element is 2.
> The Process of Finding smallest Element is:   
> > arr = [7, 2, 8, 6, 3]   
> > so first Element is 7 marked as `minimum`    
> > 7 < 2 so now 2 is marked as `minimum`    
> > 2 < 8 is not true so moved onto next comparison    
> > 2 < 6 is not true also so next    
> > 2 < 3 is also not true.    
> > so "2" is the `minimum`

> Swap 2 with 7.   
> Array after step 1: [2, 7, 8, 6, 3]   

+ Step 2: Consider the subarray starting from the second element ([7, 8, 6, 3]) and find the smallest element.
> The smallest element is 3.
> Swap 3 with 7.
> Array after step 2: [2, 3, 8, 6, 7]

+ Step 3: Consider the subarray starting from the third element ([8, 6, 7]) and find the smallest element.
> The smallest element is 6.
> Swap 6 with 8.
> Array after step 3: [2, 3, 6, 8, 7]

+ Step 4: Consider the subarray starting from the fourth element ([8, 7]) and find the smallest element.
> The smallest element is 7.
> Swap 7 with 8.
> Array after step 4: [2, 3, 6, 7, 8]
#### Now, the array is sorted: [2, 3, 6, 7, 8].


<ins>**Complexity of Selection Sort:**</ins>  
Time Complexity: 	$O(n^2)$    
Space Complexity:	$O(1)$

**Advantages of Selection Sort:**  
= It is easy to Understand and Implement.   
= Works well with small datasets.     
 
**Disadvantages of Selection Sort:**  
= It's Time Complexity is Very High so it's not Really Good for Larger Data Sets.    
= Not Stable Sorting algorithm.    
= Not adapt to the Data input.    

### Algorithm for Bubble Sort
```
1. Start
2. Repeat steps 3-6 for each index i from 0 to n-1 (where n is the number of elements in the array)
3.   Set min_index to i
4.   Repeat steps 5-6 for each index j from i+1 to n-1
5.     If array[j] < array[min_index], then
6.       Set min_index to j
7.   Swap array[i] with array[min_index]
8. End Repeat
9. End
```
## Quick Sort: 
+ It is the Algorithm based on Divide and Conquer Approach.
+ An array is divided into SubArrays by selecting a Pivot element.   
+ The left and right SubArrays are also divided using the same approach. 
+ This process continues until each subarray contains a single element.

**Process of Quick Sort**
+ Pick an Element Called Pivot from the array.(Can be any Element at random).
+ Then Use the Comparison so that we can rearrange the array as the Smaller element than Pivot Comes in Left Side and Same as this Larger comes in the Right Side of the Pivot.
+ Then we Recursuvely perform this same action on the subarrays made by dividing the pivot by itself.
+ When all subarrays are sorted then we will combine then to get to the Final Sorted array.

**Example1**
#### Initial array: [9, 4, 3, 8, 6, 7, 5]

+ Step1: Let's Choose a Pivot. (we choose as 5).
+ Step2: Sort the Array as Elements Smaller than 5 Goes in Left and Largers goes in Right Side of 6.
> After that Array would be like: [4, 3, 5, 8, 6, 7, 9]     
> Process of Sorting this type would be like:      
> > First We Take the First Element in the array and Compare it to the Pivot.      
> > 9<5, No so we'll Take this as Higher Pointer & Move on to the Next Element.       
> > 4<5, Yes so we'll Swap 9 with 4.      
> > Array: [4, 9, 3, 8, 6, 7 ,5]         
> > Moving on Next 3<5, Yes so we'll Again swap with Higher Pointer.         
> > Array: [4, 3, 9, 8, 6, 7 ,5]         
> > Moving Ahead we didn't Find any Smaller Element than 5.         
> > So we'll Swap 5 with 9.        
> > Array: [4, 3, 5, 8, 6, 7, 9]          
> By This we Sorted the Array with Pivot.           
+ Step3: Then the Array gets Divided at the Pivot Point into Two Parts. ([4, 3] & [8, 6, 7, 9]).         
+ Step4: We'll perform the Same From Step 1 on Both of these Subarrays.        
+ Step5: Arrays We get after taking Pivot as First Element: [3, 4] & [6, 7, 8, 9].           

#### Now, the array is sorted: [3, 4, 5, 6, 7, 8, 9].

<ins>**Complexity of Quick Sort:**</ins>  
<ins>Time Complexity:</ins>
                  Worst:     $n^2$       
                  Best:      $nlog n$       
                  Average:   $nlog n$       
                
<ins>Space Complexity:</ins>	$log n$

**Advantages of Quick Sort:**  
= It is a divide-and-conquer algorithm that makes it easier to solve problems.
= Works well with Large datasets.     
= Only requires small amount of Memory to Perform.    
 
**Disadvantages of Quick Sort:**  
= Has worst Case Time Complexity When Pivot is poorly Choosen.
= Not Stable Sorting algorithm.    
= Not A good Choice for Small Data Sets.    

### Algorithm for Quick Sort
```
1. Procedure quickSort(arr[], low, high)
2.     If low < high Then
3.         pivotIndex = partition(arr, low, high)
4.         quickSort(arr, low, pivotIndex - 1)
5.         quickSort(arr, pivotIndex + 1, high)
6.     End If
7. End Procedure

8. Function partition(arr[], low, high)
9.     pivot = arr[high]
10.    i = low - 1
11.    For j = low to high - 1
12.        If arr[j] <= pivot Then
13.            i++
14.            swap arr[i] with arr[j]
15.        End If
16.    End For
17.    swap arr[i + 1] with arr[high] (placing pivot in its correct position)
18.    Return i + 1 (returning the index of the pivot)
19. End Function

```

## Merge Sort: 
+ It is also Based on Divide and Conquer Rule.
+ Here the Problem is Divided into SubProblems and then they are Solved.
+ Then those Solution are Combined to join them into one.

**Process of Merge Sort**
+ First we Take an array and divide it from the middle.
+ Then we Take Those Sub arrays and same Divide them from Middle again.
+ And we Do that Until the Array Gets Separated into Sub Arrays with Single Element.
+ Then these arrays are combined and then also get sorted within joining arrays.
+ Then those arrays are also Merged into bigger arrays and also sorted and joined and Sorted Further.

**Example:**
#### Array [7, 2, 4, 9, 5, 10, 1].

+ Step 1: Divide
> Divide the array into smaller sub-arrays until each sub-array has only one element.     
> Initial array: [7, 2, 4, 9, 5, 10, 1]     
> Divide into sub-arrays: [7], [2], [4], [9], [5], [10], [1]

+ Step 2: Merge (and Sort)
> Merge and sort adjacent sub-arrays to create larger sorted sub-arrays.    
> Merge [7] and [2]: Result: [2, 7]    
> Merge [4] and [9]: Result: [4, 9]    
> Merge [5] and [10]: Result: [5, 10]    
> Merge [1] and [4, 9]: Result: [1, 4, 9]    
> Merge [2, 7] and [5, 10]: Result: [2, 5, 7, 10]    
> Merge [1, 4, 9] and [2, 5, 7, 10]:     
> Result: [1, 2, 4, 5, 7, 9, 10]     

#### Final Sorted Array:
#### The final sorted array is [1, 2, 4, 5, 7, 9, 10].

<ins>**Complexity of Merge Sort:**</ins>  
<ins>Time Complexity:</ins>
                  Worst:     $O(n log n)$       
                  Best:      $O(n log n)$       
                  Average:   $O(n log n)$       
                
<ins>Space Complexity:</ins>	$O(n)$


**Advantages of Merge Sort:**  
= It is a divide-and-conquer algorithm that makes it easier to solve problems. 
= Works well with Large datasets.       
= Has Guaranteed Worst Time Complexity of O(nlog n).   
= It is a Stable Sorting Algorithm
 
**Disadvantages of Merge Sort:**  
= Requires Additional Memory Space for working.      
= It is not Very Optimised For Smaller Datasets.     

### Algorithm for Merge Sort
```
MergeSort(arr[], low, high)
1. If low is less than high:
2.     Set middle as (low + high) / 2
3.     Call MergeSort(arr, low, middle)  // Recursively sort the left half
4.     Call MergeSort(arr, middle + 1, high) // Recursively sort the right half
5.     Merge(arr, low, middle, high)  // Merge the sorted halves

Merge(arr[], low, middle, high)
1. Create temporary arrays leftArr[] and rightArr[]
2. Set leftArr[] to contain elements from arr[low] to arr[middle]
3. Set rightArr[] to contain elements from arr[middle+1] to arr[high]
4. Initialize variables: i to low, j to middle + 1, k to low
5. While i is less than or equal to middle and j is less than or equal to high:
6.     If leftArr[i] <= rightArr[j]:
7.         Set arr[k] to leftArr[i]
8.         Increment i by 1
9.     Else:
10.        Set arr[k] to rightArr[j]
11.        Increment j by 1
12.    Increment k by 1
13. Copy remaining elements of leftArr[] and rightArr[], if any, into arr[]
```
## Heap Sort: 
+ It is Based on Heap Structure or Like a Tree Structure.
+ It is very Similar to Selection Sort where First Minimum is Chosen.
+ In this first Maximum element is Chosen and it is put into the position.
+ And by this process We sort the Array.

**Process of Heap Sort**
+ Build a heap from the given input array.
+ Swap the root element of the heap (which is the largest element) with the last element of the heap.
+ Remove the last element of the heap (which is now in the correct position).
+ Heapify the remaining elements of the heap.
+ Repeat the following steps until the heap contains only one element:
+ The sorted array is obtained by reversing the order of the elements in the input array.

**Example:**
It's a Bit Hard To understand it with the Text so we will use Images as the Example for this

#### Array [1, 12, 9, 5, 6, 10].
+ Step1: We'll Build A Tree From the Array.
+ ![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/4d0f45e5-a733-4ecd-814a-f95f39ae2aeb)
+ Step2: We'll Heapify the Tree.
+ ![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/07115ef8-6555-4a6b-8801-552b68ab1ced)
+ Step3: We'll Swap the Root to the Last Node.
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/a4349e0d-46bb-48ba-9306-06635ae794f2)
+ Step4: Then We'll remove it and Put it into the Array and Heapify the Remaining Tree.
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/a97604da-2cd4-48e7-a00e-a69cc2566bfc)
+ Step5: Repeat the Same Process Again and Again until we get [Last Node = Root]
![image](https://github.com/abirxgpt/Sem-3rd/assets/142162873/a44248e4-34f1-48af-8f69-4ea2bc57092b)

#### Sorted Array: [1, 5, 6, 9, 10 ,12].
**Important Note: Here in Example I Directly Put the Element I Removed into Last Position of Array, so No need to Reverse it**

<ins>**Complexity of Heap Sort:**</ins>  
<ins>Time Complexity:</ins>
                  Worst:     $O(n log n)$       
                  Best:      $O(n log n)$        
                  Average:   $O(n log n)$             
                
<ins>Space Complexity:</ins>	$O(1)$


**Advantages of Heap Sort:**  
= It is very Simple to understand as an Algorithm.     
= It Has Constant time Complexity so that it is very good for Larger Datasets.       
= Memory Usage Can be Minimal.
 
**Disadvantages of Heap Sort:**  
= Heap sort is costly.       
= Heap sort is Unstable Sorting Algorithm.        
= Not very efficient when working with highly complex data.    

### Algorithm for Merge Sort
```
HeapSort(arr[], n)
1. BuildMaxHeap(arr, n)   // Build a max heap from the given array
2. Set heapSize to n
3. Repeat steps 4-5 while heapSize > 1
4.     Swap arr[0] with arr[heapSize - 1]   // Swap the root (maximum element) with the last element
5.     Decrease heapSize by 1   // Reduce the size of the heap
6.     MaxHeapify(arr, 0, heapSize)   // Heapify the remaining elements
7. End Repeat

BuildMaxHeap(arr[], n)
1. Set heapSize to n
2. Repeat steps 3-5 for each index i from n/2 - 1 down to 0
3.     MaxHeapify(arr, i, heapSize)   // Heapify the subtree rooted at index i
4. End Repeat

MaxHeapify(arr[], i, heapSize)
1. Set largestIndex to i
2. Set leftChild to 2 * i + 1   // Index of the left child
3. Set rightChild to 2 * i + 2   // Index of the right child
4. If leftChild < heapSize and arr[leftChild] > arr[largestIndex], then
5.     Set largestIndex to leftChild
6. If rightChild < heapSize and arr[rightChild] > arr[largestIndex], then
7.     Set largestIndex to rightChild
8. If largestIndex ≠ i, then
9.     Swap arr[i] with arr[largestIndex]
10.    MaxHeapify(arr, largestIndex, heapSize)   // Recursively heapify the subtree
```
## Shell Sort: 
+ It is a Extenstion of insertion sort
+ It First uses big gaps to Compare between Element and then Short Them Gradualy.
+ The Gaps are Generally Decided by the Algorithm itself.
+ The Performance of Shell sort is basically Dependant upon Gap Algorithm.

**Process of Shell Sort**
+ First we will Choose the Gap (We are using Gap sequence of Shell Sort Itself i.e. N/2, N/4......1)
+ Then the N will be the size of the Array or the Number of Elements to be sorted.
+ Then the Gap Elements will Compare themselves and If the First Element is smaller than the Second Element.
+ We will Swap it and then increment the number of Element.
+ After the Array is Completed by N/2 we will Choose N/4 and Goes on.
+ This Will be Better to Understand it by Example.

**Example:**
#### Initial Array: [8, 3, 5, 1, 4, 7, 2, 6].

+ Step 1: Let's Initialize Gap so N/2 (Size of Array / 2) at first.   
+ Pass 1:   
> 8/2 = 4.   
> So we will take 4 Gaps between each Element.   
> From Starting we will Compare 0th Element and 4th Element (8<4, Yes so we will swap them)   
> Array: [4, 3, 5, 1, 8, 7, 2, 6]   
> Then we will compare 1st Element and 5th Element (3<7, No so we will Move on to the Next)   
> Then we will compare 2nd Element and 6th Element (5>2, Yes so we will swap them)   
> Array: [4, 3, 2, 1, 8, 7, 5, 6]   
> Then we will compare 3rd Element and 7th Element (1>6, No so we will Move on to the Next)   
> Now there's no Element after 7th Element so we will move onto Next Pass.   
+ Pass 2:   
> Here Gap N/4 = 8/4 = 2   
> So we will start Comparing Elements with gap of 2 between Each.   
> Array At the End will be: [2, 1, 4, 3, 5, 6, 8, 7]   
+ Pass 2:      
> Here Gap N/8 = 8/8 = 1   
> Compare and swap adjacent elements as in regular insertion sort.   
> After the final pass, the array is fully sorted: [1, 2, 3, 4, 5, 6, 7, 8].   
 

<ins>**Complexity of Shell Sort:**</ins>  
<ins>Time Complexity:</ins>
                  Worst:     $O(n^2)$       
                  Best:      $Ω(n log(n))$       
                  Average:   $O(n*log n)~O(n^(1.25))$       
                
<ins>Space Complexity:</ins>	$O(1)$


**Advantages of Shell Sort:**  
= Replacement for insertion sort, where it takes a long time to complete a given task.    
= To Sort Medium to Large Size Databases.     
= In Insertion Sort to Reduce the Number of Operations
 
**Disadvantages of Shell Sort:**  
= It is not a Stable sorting Algorithm    
= It is Solely Depends on it's Gap Sequence     
= It is not Always Very Efficient      

### Algorithm for Shell Sort
```
ShellSort(arr[], n)
1. Define a sequence of gaps (intervals) for sorting.
2. Start with a large gap, typically half the length of the array, and reduce it in each iteration.
3. Repeat the following steps until the gap becomes 1:
     1. For each gap, iterate through the array from gap to n-1:
         a. Compare arr[i] with arr[i-gap].
         b. If arr[i] is less than arr[i-gap], swap them.
         c. Continue comparing and swapping elements with a gap until no more swaps are needed.
4. After the last pass with a gap of 1, the array is fully sorted.

```
## Counting Sort: 
+ It is a Non-Comparison-Based Sorting Algorithm.
+ It is Very good for Short Number of Elements & Repeatative Elements.
+ Idea Based on Counting Sort is that it Count the Frequency of Each Distinct Element.
+ And use it to place the Element in thier correct sorted position.

**Process of Counting Sort**
+ First we will choose the Max Element from the Array.
+ Then we will make an Extra Array of a size [Max + 1].
+ Then we will count the Array and Store Each Elements in the Position of the Array.
+ Then We will do a Cumulative Count or Sum for the Array.
+ Finally we will check the Array and Store it to the Final Array in Position [Element - 1].

**Example:**
#### Initial Array: [4, 2, 2, 8, 3, 3, 1].

+ Step 1: Let's Take the Array: [4, 2, 2, 8, 3, 3, 1].
+ Step 2: Let's find the Max Element i.e.: Max = 8.
+ Step 3: Then we will make an array of Max+1 and Store all the Values as 0 from Start
> Array: [0,0,0,0,0,0,0,0,0]      
+ Step 4: We will Increase the Count of the Array as they are in the Input Array.
> Array: [0,0,0,0,0,0,0,0,0]      
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠 0,1,2,3,4,5,6,7,8     
> So Starting from the start we will take 4 and increase the count of number 4th Element in the array.     
> Array: [0,0,0,0,1,0,0,0,0]       
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠 0,1,2,3,4,5,6,7,8      
> Next 2 so we will increase number of 2th Element.     
> Array: [0,0,1,0,1,0,0,0,0]      
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠 0,1,2,3,4,5,6,7,8     
> Next Again 2 we will increase number of 2th Element Again.      
> Array: [0,0,2,0,1,0,0,0,0]      
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠 0,1,2,3,4,5,6,7,8     
> By doing this we will at the end will get the Array.       
> Array: [0,1,2,2,1,0,0,0,1]      
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠 0,1,2,3,4,5,6,7,8     
+ Step 5: Now we will Cumulative Count the Whole Array.      
> Array: [0,1,3,5,6,6,6,6,7]      
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠 0,1,2,3,4,5,6,7,8    
+ Step 6: Now we will Sort the Whole Array as by Taking Element from Input Array and Checking the Position and Then Storing it in Next array by doing [Count in Particular Position - 1]
> Input Array: [4, 2, 2, 8, 3, 3, 1]                             
> Let's Take 4 & Check it in the Temp Array We Made                    
> Array: [0,1,3,5,6,6,6,6,7]         
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠 0,1,2,3,4,5,6,7,8        
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠^          
> so 6-1 = 5     
> Storing it into the 5th Position. i.e. [0,0,0,0,0,4,0]                   
> Let's Take 2                  
> Array: [0,1,3,5,6,6,6,6,7]      
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠 0,1,2,3,4,5,6,7,8   
> 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠   󠀠 󠀠 󠀠 󠀠^          
> so 3-1 = 2    
> Storing it into the 2nd Position. i.e. [0,0,2,0,0,4,0]                 
> Let's Take 2 Again & Now We will use Position of 2.           
> Array: [0,1,3,5,6,6,6,6,7]      
>󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠 0,1,2,3,4,5,6,7,8   
>󠀠󠀠󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠󠀠  󠀠 󠀠 󠀠 ^          
> so 2-1 = 1      
> Storing it into the 2nd Position. i.e. [0,2,2,0,0,4,0]          
+ Step 7: Completing the Whole Array we will Get.

#### Sorted Array: [1,2,2,3,3,4,8]



<ins>**Complexity of Counting Sort:**</ins>  
<ins>Time Complexity:</ins>
                  Worst:     $O(N+M)$       
                  Best:      $O(N+M)$       
                  Average:   $O(N+M)$       
                _Where N and M is inputArray[] and countArray[] Respectively._
                
<ins>Space Complexity:</ins>	$O(N+M)$

                _Where N and M is outputArray[] and countArray[] Respectively._


**Advantages of Counting Sort:**  
= It is a Stable Algorithm.   
= Counting Sort is Easy To Code.      
= Counting Sort is Faster than All Comparision Based Algorithm, such as Merge Sort or Quick Sort.     

**Disadvantages of Counting Sort:**  
= It Does not Work on the Decimel Values.       
= It Does not Work if Number of Element is Too Large.      
= Counting Sort is not an In-place sorting algorithm.         

### Algorithm for Counting Sort
```
CountingSort(arr[], n)
1. Find the maximum element, max, in the array.
2. Create a counting array, count[], of size max+1, initialized with all zeros.
3. Iterate through the input array arr[] and increment the count of each element in the counting array.
4. Compute the prefix sum of the counting array to determine the position of each element in the sorted array.
5. Create a temporary array, sortedArr[], of size n to store the sorted elements.
6. Iterate through the input array arr[]:
   a. Use the element arr[i] as an index to determine its position in the sorted array.
   b. Decrement the count of arr[i] in the counting array.
   c. Place arr[i] in the sortedArr[] at the determined position.
7. Copy the elements from sortedArr[] back to the original array arr[].


```
