y=0
soma=0
while True:
    x=float(input("Digite um número: "))
    if x==0:
        break
    soma=soma+x
    y=y+1
    
if(y!=0):
    media=soma/y
else:
    media=0
    
print("A média é: %.2f"%media)