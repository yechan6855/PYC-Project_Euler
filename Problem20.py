ans=1;
for i in range(1,100):
    ans*=i;

ans1=str(ans)


arr=[]
res=0

for i in range(len(ans1)):
    arr.append(int(ans1[i]))

for i in range(len(arr)):
    res+=arr[i]
print(res)