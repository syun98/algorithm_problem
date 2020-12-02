a=1; b=1;
while (a>0)and(b<10):
    try :
        a, b = map(int, input().split())
        if(a>0)and(b<10):
            print(a + b)
    except :
        break