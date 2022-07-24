import sys
from sys import stdin 

n=1000
a = [False,False] + [True]*(n-1)
primes=[]

for i in range(2,n+1):
  if a[i]:
    primes.append(i)
    for j in range(2*i, n+1, i):
        a[j] = False


N = int(input())
orders = list(map(int,sys.stdin.readline().split()))
res=0
for i in range(len(orders)):
    if orders[i] in primes:
        res+=1

print(res)

