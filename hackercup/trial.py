t = int(input())
for steps in range(t):
 n = int(input())
 arr = [int(i) for i in input().split()]

 arr.sort()

 ans = 0

 if n == 5:
  a = (arr[0] + arr[1]) / 2
  b = (arr[n-1] + arr[n-3]) / 2
  x = b-a
  c = (arr[0] + arr[2]) / 2
  d = (arr[n-1] + arr[n-2]) / 2
  y = d-c

  ans = max(ans , x, y)
 else:
  ans = (((arr[-1]+arr[-2])/2) - ((arr[0]+arr[1])/2))

 if ans == int(ans):
  ans = int(ans)

 print("Case #{}:".format(steps+1),ans)