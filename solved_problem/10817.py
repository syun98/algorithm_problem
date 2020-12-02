a, b, c = map(int, input().split())
if a<=b:
    if b<=c:
        print(b)
    else:
        if a<=c:
            print(c)
        else:
            print(a)
elif b<=a:
    if c<=b:
        print(b)
    else:
        if a<=c:
            print(a)
        else:
            print(c)