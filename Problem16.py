n = pow(2,1000)

ans=n%10

for i in range(1000):
    n//=10
    ans+=n%10
print(ans)