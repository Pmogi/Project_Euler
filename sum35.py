# sum all 3 & 5s to 1000

def main():
	divisible = []
	
	for num in range(0,1000):
			# if the current number has no remander then add that
			# number to the divisible array
			if num % 3 == 0:
				divisible.append(num)
			
			elif num % 5 == 0:
				divisible.append(num)
				
	divSum = sum(divisible)
	print divSum

main()		
