```python
#1912
#입력
import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input()) 
arr=list(map(int,input().split()))
#입력끝
#dp배열
dp=[0]*n
dp[0]=arr[0]
#정답
answer=-999999

for i in range(1,n):
    dp[i]=max(arr[i],dp[i-1]+arr[i]) # arr[i] , 연속합 중 크기가 큰 수를 dp[i]에 저장
    answer=max(dp[i],answer) #정답판별
answer=max(dp[0],answer) 
print(answer) #정답 출력
```
