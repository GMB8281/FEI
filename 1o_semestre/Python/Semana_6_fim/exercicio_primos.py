def eh_primo(n):
    divisores=0
    if (n>0):
        for i in range (n,0,-1):
            if n%i==0:
                divisores=divisores+1
            elif n<0:
                print("De acordo com o Teorema Fundamental da Aritmética, não é possível verificar primos para negativos.")
    if(divisores>0 and divisores <=2 and n>=0):
        return True
    elif(n>=0):
        return False

primos=0
y=0

for i in range (0,100):
    if eh_primo(i)==True:
        primos=primos+1

vet=[0]*primos
soma=primos-1

for i in range (0,100):
    if eh_primo(i)==True:
        vet[primos-1]=i
        primos=primos-1
        
for i in range (0,soma):
    y=y+vet[i]
    
print(y)