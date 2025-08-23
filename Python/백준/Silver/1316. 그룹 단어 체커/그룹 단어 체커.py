n = int(input())

cnt = 0
for _ in range(n):
    s = input()
    setArr = set()
    idx = 0
    prevAlpha = ''
    cnt+=1
    while(len(s) > idx):
        if(s[idx] in setArr and prevAlpha != s[idx]):
            cnt -=1
            break
        prevAlpha = s[idx]
        setArr.add(s[idx])
        idx+=1
        
print(cnt)