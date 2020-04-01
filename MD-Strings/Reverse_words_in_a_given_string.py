t=int(input())
for i in range(0,t):
    s=input()
    words=s.split(".")
    str=[]
    for word in words:
        str.insert(0,word)
    print(".".join(str))
    
