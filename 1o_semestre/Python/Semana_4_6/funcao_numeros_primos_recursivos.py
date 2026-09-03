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

while True:
    n=int(input("Digite um número: "))
    if n==0:
        break
    n = eh_primo(n)
    if n==True:
        print("É primo")
    else:
        print("Não é primo")