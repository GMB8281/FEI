x=int(input("Digite o valor de x: "))
y=1
divisores=0

if x<0:
    x=x*-1

while y<=x:
    if x%y==0:
        divisores=divisores+1
    y=y+1

if (divisores==2):
    print("É primo")
else:
    print("Não é primo")