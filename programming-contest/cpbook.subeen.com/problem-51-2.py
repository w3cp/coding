tc = int(raw_input())

while (tc > 0):
    food = float(raw_input())
    days = 0
    
    while (food >= 1.0):
        food = food / 2
        days = days + 1
    
    print days, "days"
    tc = tc -1
