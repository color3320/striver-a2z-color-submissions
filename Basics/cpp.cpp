// Given two integers low and high, return the sum of all integers from low to high inclusive.
// Example 1

// Input: low = 1, high = 5

// Output: 15

// Explanation: 1 + 2 + 3 + 4 + 5 = 15

// Example 2

// Input: low = 3, high = 7

// Output: 25

// Explanation: 3 + 4 + 5 + 6 + 7 = 25

class Solution {
    public:
        int forLoop(int low, int high) {
            // Your code goes here
            int sum = 0;
            for (int i = low; i<=high; i++){
                sum+=i;
            }
            return sum;
        }
    };

    // While Loop

    // Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
    
    
    
    // A number ends with digit d if its last digit is d.
    
    
    // Example 1
    
    // Input: d = 1
    
    // Output: 12300
    
    // Explanation:
    
    // The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491
    
    // Their sum is 12300.
    
    // Example 2
    
    // Input: d = 5
    
    // Output: 12500

    class Solution {
        public:
        int whileLoop(int d) {
            // Your code goes here  
            int sum = 0; // sum for adding
            int count = 0;
    
            int currentNumber;
            if (d == 0) {
                currentNumber = 10;
                } 
            else {
                currentNumber = d;
                }
    
            // int currentNumber = (d == 0) ? 10 : d; // alternative way to write above if else
            while (count < 50) {
                sum += currentNumber;
                currentNumber += 10; // The next number ending in 'd' is always 10 away
                count += 1;          // Increment our counter
            }
            return sum;
        }
    };


    // Pass by Ref

    // Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
    
    
    // Example 1
    
    // Input: n=5, arr = [1,2,3,4,5]
    
    // Output: [5,4,3,2,1]
    
    // Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]
    
    // Example 2
    
    // Input: n=6, arr = [1,2,1,1,5,1]
    
    // Output: [1,5,1,1,2,1]
    
    // Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

    class Solution{
        public:
            void reverse(vector<int>& arr){
                int i = 0;
                int j = arr.size() - 1;
        
                while (i<j) {
                    std::swap(arr[i], arr[j]);   // Swap the elements
                    i++;                        // Move the left pointer forward
                    j--;                        // Move the right pointer backward
                }
            }
        };