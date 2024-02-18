while True:
	try:
		num=input()
		nums=int(num)
		
		num=str(num).replace(" ", "")
		
		if(nums==0):
			break
		if(nums%11==0):
			print(num,"is a multiple of 11.")
		else:
			print(num,"is not a multiple of 11.")
	except:
		break
