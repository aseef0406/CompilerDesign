
def S():
	#print('In S')
	E()
	match(';')
def E():
	#print('In E')
	T()
	R()

def R():
	#print('In R')
	if token=='+' :
		match('+')
		T()
		R()
	elif token=='-':
		match('-')
		T()
		R()
	else:
		#print('blank')
		pass
def T():
	#print('In T')
	if token=='Id':
		match('Id')
	else:
		match('Num')

def match(t):
	global token
	#print('In match',t)
	if t==';':
		print("\nSucessfully parsed!!")
		exit()
	if t==token :
		print(t,end='')
		token=lexan()
	else:
		#print("in else")
		pass
def lexan():
	global i
	i=i+1
	return tc[i]
def check(li):
	for i in li:
		if i not in ['Id','Num','+','-',';']:
			print("\nString is invalid!!!!!!")
			exit()

i=0
tc=list(input().split(" "))#['Id', '+', 'Num',';']#
token=tc[i]
#print(tc,tc[i])
check(tc);
S()