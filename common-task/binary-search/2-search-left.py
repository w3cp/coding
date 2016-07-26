# py 2.x

def search(array, key):
    begin = 0
    end = len(array) - 1
    index = None
    while begin <= end:
        mid = (begin + end) / 2
        if key == array[mid]:
            index = mid # One occurance of the value is found, save the index
            end = mid - 1 # Continue searching the left portion after one occurrence is found
        elif key > array[mid]: begin = mid + 1
        elif key < array[mid]: end = mid - 1
    return index # Index will contain None if the value is not found

info = [100, 2, 10, 50, 20, 500, 100, 150, 200, 1000, 100]
info = sorted(info)
while True:
    key = int(raw_input())
    print search(info, key)

