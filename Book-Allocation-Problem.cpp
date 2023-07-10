// This Program is done using Binary Search

/*#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum += arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr,int n,int m)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;

    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int n=4,m=2;
    int arr[4] = {10,20,30,40};
    return 0;
}   
    */


/* Using Binary Search */

// /* C++ code for Book Allocation problem to find the minimum value of the maximum number of pages*/ 
// #include <bits/stdc++.h>

// using namespace std;
// /*function to check if it is possible to allocate the books such that the maximum number of pages assigned to any student is numPages*/
// bool isPossible(int pages[], int n, int m, int numPages) {
//     int cntStudents = 1;
//     int curSum = 0;
//     for (int i = 0; i < n; i++) {
//         if (pages[i] > numPages) {
//             return false;
//         }
//         if (curSum + pages[i] > numPages) {
//             /* Increment student count by '1'*/
//             cntStudents += 1;
//             /* assign current book to next student and update curSum */
//             curSum = pages[i];
//             /* If count of students becomes greater than given no. of students, return False*/
//             if (cntStudents > m) {
//                 return false;
//             }
//         } else {
//             /* Else assign this book to current student and update curSum */
//             curSum += pages[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(int pages[], int n, int m) {
//     /* If number student is more than number of books */
//     if (n < m) {
//         return -1;
//     }
//     /* Count total number of pages */
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += pages[i];
//     }
//     /* Initialize start with 0 and end with sum */
//     int start = 0, end = sum;
//     int result = INT_MAX;
//     /* Traverse until start <= end , binary search */
//     while (start <= end) {
//         /* Check if it is possible to distribute books by using mid as current maximum */
//         int mid = start + (end - start) / 2;
//         if (isPossible(pages, n, m, mid)) {
//             result = min(result, mid); /*update the result*/
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }
//     return result;
// }
// int main() {
//     int n = 4;
//     int m = 2;
//     int pages[] = {10, 20, 30, 40};
//     cout << "The minimum value of the maximum number of pages in book allocation is: " << allocateBooks(pages, n, m) << endl;
// }

/* Without using Binary Search */

/* C++ code for Book Allocation problem to find the minimum value of the maximum
number of pages*/
// #include <bits/stdc++.h>

// using namespace std;
// /*function to check if it is possible to allocate the books such that the
// maximum number of pages assigned to any student is numPages*/
// bool isPossible(int pages[], int n, int m, int numPages) {
//     int cntStudents = 1;
//     int curSum = 0;
//     for (int i = 0; i < n; i++) {
//         if (pages[i] > numPages) {
//             return false;
//         }
//         if (curSum + pages[i] > numPages) {
//             /* Increment student count by '1'*/
//             cntStudents += 1;
//             /* assign current book to next student and update curSum */
//             curSum = pages[i];
//             /* If count of students becomes greater than given no. of students, return False*/
//             if (cntStudents > m) {
//                 return false;
//             }
//         } else {
//             /* Else assign this book to current student and update curSum */
//             curSum += pages[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(int pages[], int n, int m) {
//     /* If number student is more than number of books */
//     if (n < m) {
//         return -1;
//     }
//     /* Count total number of pages */
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += pages[i];
//     }
//     /* Check for every possible value */
//     for (int numPages = 1; numPages <= sum; numPages++) {
//         if (isPossible(pages, n, m, numPages)) {
//             return numPages;
//         }
//     }
//     return -1;
// }
// int main() {
//     int n = 4;
//     int m = 2;
//     int pages[] = {10, 20, 30, 40};
//     cout << "The minimum value of the maximum number of pages in book allocation is: " << allocateBooks(pages, n, m) << endl;
// }

/* Check the Problem statement on Codestudio or Geeks4Geeks */