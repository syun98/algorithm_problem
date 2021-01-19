def f(n):
    a=n%10
    b=int(n/10)+a
    c=a*10+b%10

    return c

n=int(input())
nn=n
cnt=1

while n!=f(nn):
    cnt+=1
    nn=f(nn)

print(cnt)