num = int(input())
t=0
while t<num:
	n=int(input())
	a = [int(i) for i in input().split()]
	a.sort()
	i=0
	j=len(a)-1
	ans=[]
	while i<=j:
		if i==j:
			ans.append(a[i])
			i=i+1
		else:
			ans.append(a[i])
			ans.append(a[j])
			i=i+1
			j=j-1
	for i in reversed(ans):
		print(i, end=' ')
	t=t+1
Success #stdin #stdout 0.02s
