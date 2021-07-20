s = map(int, input().split())
for i in s:
    if i % 2 == 0:
        if i < 0:
            print('A')
        else:
            print('C')
    else:
        if i < 0:
            print('B')
        else:
            print('D')
