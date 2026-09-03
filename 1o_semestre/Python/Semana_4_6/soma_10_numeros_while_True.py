y=1
soma=0

while True:
    x=int(input("Digite o valor do %d° número: " %y))
    soma=soma+x
    y=y+1
    if y>10:
        break
    
print("%d"%soma)