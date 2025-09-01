total = int(input())
n = int(input())

for i in range(n):
    p,c = map(int,input().split())
    total -=p*c

if(total == 0):
    print("Yes")
else:
    print("No")
    