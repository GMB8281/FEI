maior=0

for i in range (1,7):
    x=int(input("Digite o %d° número: " %i))
    if maior==0:
        maior=x
    elif x>maior:
        maior=x

print("\n%d" %maior)