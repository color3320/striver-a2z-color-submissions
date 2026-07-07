# // Pattern 1

# // Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



# // *****

# // *****

# // *****

# // *****

# // *****



# // Print the pattern in the function given to you.

class Solution:
    def pattern1(self, n):
        for i in range(n):
            for j in range(n):
                print("*", end ="")
            print ()

# Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

# *

# **

# ***

# ****

# *****

# Print the pattern in the function given to you.

class Solution:
    def pattern2(self, n):
        for i in range(n):
            for j in range(i+1):
                print("*", end ="")
            print ()

# # In Python, we can once again use string multiplication to avoid writing the inner loop entirely. 
# # Since the number of stars precisely matches the row number, 
# # we just multiply the string "*" by our current step in the loop.

class Solution:
    def pattern2(self, n):
        for i in range(1, n+1):
            print("*"*i)

# Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



# 1

# 12

# 123

# 1234

# 12345



# Print the pattern in the function given to you.

class Solution:
    def pattern3(self, n):
        for i in range(1, n+1):
            for j in range(1, i+1):
                print(j, end ="")
            print ()

# # In Python, we can once again use string multiplication to avoid writing the inner loop entirely. 
# # Since the number of stars precisely matches the row number, 
# # we just multiply the string "*" by our current step in the loop.

class Solution:
    def pattern3(self, n):
        for i in range(1, n+1):
            print(str(i)*i)

# Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



# 1

# 22

# 333

# 4444

# 55555



# Print the pattern in the function given to you.
class Solution:
    def pattern4(self, n):
        for i in range(1, n+1):
            for j in range(1, i+1):
                print(i, end ="")
            print ()

