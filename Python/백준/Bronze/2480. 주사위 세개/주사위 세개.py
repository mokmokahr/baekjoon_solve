a,b,c = map(int,input().split(' '))
if(a == b == c):
    print(10000+a*1000)
elif(a == b or a == c):
    print(1000+a*100)
elif(b == c):
    print(1000+b*100)
else:
    max = 0
    for i in [a,b,c]:
        if(max<i):
            max = i
    print(max*100)
            