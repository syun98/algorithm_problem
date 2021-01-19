N = int(input())
for i in range(N):
    for j in range(N):
        if j<=N-i-2:
            print(' ',end='')
        else:
            print('*',end='')
    print('');