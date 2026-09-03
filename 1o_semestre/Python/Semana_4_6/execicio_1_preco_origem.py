preco=float(input("Digite o preço: R$ "))
codigo=int(input("Digite o código de origem: "))

print("Preço: R$ %.2f" %preco)

match codigo:
    case 1:
        print ("Região Sul")
    case 2:
        print ("Região Norte")
    case 3:
        print ("Região Leste")
    case 4:
        print ("Região Oeste")
    case 5|6:
        print ("Região Nordeste")
    case 7|8|9:
        print ("Região Sudeste")

if (codigo >=10 and codigo <=20):
    print ("Região Centro-Oeste")
elif (codigo >=25 and codigo <=30):
    print ("Região Nordeste")
elif (codigo <1 or codigo>30):
    print ("Código de região não encontrado")