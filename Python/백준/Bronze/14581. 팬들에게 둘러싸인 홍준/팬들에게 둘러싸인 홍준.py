name = input()
arr = [":fan:"]*4 + [":"+name+":"] + [":fan:"]*4
for i in range(9):
    print(arr[i],end="")
    if((i+1)%3==0): print("")