print("Enter a hyphen separated sequence of words:")
lst=[n for n in input().split('-')]  
lst.sort()
print("Sorted:")
print('-'.join(lst))