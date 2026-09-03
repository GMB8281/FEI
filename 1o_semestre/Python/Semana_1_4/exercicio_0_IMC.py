kg=float(input("Digite o peso em kg: "))
m=float(input("Digite a altura em m: "))
print("Peso: %.2f kg" %kg)
print("Altura: %.2f m" %m)
IMC=float(kg/(m**2))
print("IMC: %.2f"%IMC)
round(IMC,1)
if(IMC<18.5):
    print("Abaixo do peso")
elif(IMC<24.9):
    print("Peso normal")
elif(IMC<29.9):
    print("Excesso de peso")
elif(IMC<34.9):
    print("Obesidade 1")
elif(IMC<39.9):
    print("Obsesidade 2")
elif(IMC>=40):
    print("Obesidade 3")