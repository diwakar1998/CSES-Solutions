class test:
    def __init__(self,n):
        print(n)
s = input()

# letters=set(s)
lettercount={x:s.count(x) for x in s}
sorted(lettercount.items(), key=lambda item: item[1])
# print(lettercount)

oddCount=0

oddChar=''
for x in lettercount.items():
    if(x[1]%2 == 0):
        continue
    oddCount+=1
    oddChar+=x[0]
    
if(oddCount>1):
    print("NO SOLUTION")
    exit()
ans=""
for x in lettercount.items():
    buffer=""
    for i in range(0,x[1]):
        buffer+=x[0]
    ans+=buffer[0:int(len(buffer)/2)]

if(len(s)%2 == 0):
    print(ans+ans[::-1])
else:
    print(ans+oddChar+ans[::-1])