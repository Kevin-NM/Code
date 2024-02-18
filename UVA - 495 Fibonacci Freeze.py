fab=[0]*5001
fab[0]=0
fab[1]=1
fab[2]=2
for i in range(2,5001):
	fab[i]=fab[i-2]+fab[i-1]

while True:
	try:
		f1=int(input())
		print(f"The Fibonacci number for {f1} is {fab[f1]}")
	except:
		break;
