#O(n^2) time | O(1) space
def twoNumberSum_1(array, targetValue):
    # print(array)
    for i in range(len(array) - 1):
        for j in range(i+1, len(array)-1):
            if array[i]+array[j] == targetValue:
                return [array[i], array[j]]
    
    return []

# arr = [2,5,8,6,4,2,1,3,4,5,6,4,8,5,2,3,6]
# result = twoNumberSum_1(array=arr, targetValue=4)
# print(result)

# O(n) Time | O(n) Space
def twoNumberSum_2(array, targetValue):
    num = {}
    for i in range(len(array)-1):
        element = array[i]
        if element in num:
            return [element, targetValue-element]
        else:
            num[targetValue-element] = True
    return []

# arr = [2,5,8,6,4,2,1,3,4,5,6,4,8,5,2,3,6]
# result2 = twoNumberSum_2(array=arr, targetValue=16)
# print(result2)

# O(nlog(n)) Time | O(1) Space
def twoNumberSum_3(array, targetValue):
    array.sort()
    left = 0
    right = len(array)-1
    while right > left:
        temSum = array[left] + array[right]     
        if temSum == targetValue:
            return [array[left], array[right]]
        elif temSum < targetValue:
            left = left+1
        else:
            right = right-1

# arr = [2,5,8,6,4,2,1,3,4,5,6,4,8,5,2,3,6]
# result3 = twoNumberSum_3(array=arr, targetValue=13)
# print(result3)