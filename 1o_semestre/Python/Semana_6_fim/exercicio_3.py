def acha_maior_vetor(x:list) -> float:
    y=x[0]
    for i in range (0, len(x)):
        if y < x[i]:
            y=x[i]
    return y

vet=[0]*10

for i in range (0,len(vet)):
    vet[i] = float(input("Digite um numero: "))

maior=acha_maior_vetor(vet)

print("Maior numero: %.2f"%maior)

for i in range (0, len(vet)):
    if vet[i]==maior:
        print("Indice maior numero: %d"%i)