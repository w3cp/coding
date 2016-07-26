# py 2.x

def mysqrt(X):
    low = 0.0
    high = X
    for step in range(64):
        mid = (low + high) / 2
        print low, high, mid, mid * mid
        if mid * mid > X:
            high = mid
        else:
            low = mid
    
    print mid, mid * mid
    return mid

mysqrt(15)

