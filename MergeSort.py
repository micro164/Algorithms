#!/usr/bin/python3

#Author: Jonathon Bryant

#Description: Merge sort keeps spliting the array into subarrays until they are
#down to one item per sub array and then it merges them all back together but
#this time it does so in order.

# Code for the merge subroutine
def merge(a,b):
    """ Function to merge two arrays """
    c = []
    while len(a) != 0 and len(b) != 0:
        if a[0] < b[0]:
            c.append(a[0])
            a.remove(a[0])
        else:
            c.append(b[0])
            b.remove(b[0])
    if len(a) == 0:
        c += b
    else:
        c += a
    return c

# Code for merge sort

def mergesort(x):
    """ Function to sort an array using merge sort algorithm """
    if len(x) == 0 or len(x) == 1:
        return x
    else:
        middle = len(x)/2
        middle = int(middle)
        a = mergesort(x[:middle])
        b = mergesort(x[middle:])
    return merge(a,b)

def main():
    List = [1,2,5,3,7,4]
    List2 = mergesort(List)
    print(List2)

if __name__ == '__main__':
    main()
