a=int(input("Digite o módulo do lado a: "))
b=int(input("Digite o módulo do lado b: "))
c=int(input("Digite o módulo do lado c: "))
if (a<b+c) and (b<a+c) and (c<a+b):
    if (a==b) and (b==c):
        print("Triângulo equilátero.")
    elif (a==b) or (a==c) or (b==c):
        print("Triângulo isóceles.")
    elif (a!=b) and (b!=c) and (c!=a):
        print("Triângulo escaleno.")
    if (a*a==b*b+c*c) or (b*b==a*a+c*c) or (c*c==b*b+a*a):
        print ("É retângulo")
    else:
        print ("Não é retângulo")
else:
    print("Não é triângulo.")