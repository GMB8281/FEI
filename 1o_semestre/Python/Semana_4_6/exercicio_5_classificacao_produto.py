codigo=int(input("Digite o código do produto: "))

match codigo:
    case 1:
        print("Alimento não perecível")
    case 2|3|4:
        print("Alimento perecível")
    case 5|6:
        print("Vestuário")
    case 7:
        print("Higiene pessoal")

if(codigo>=8 and codigo<=15):
    print ("Limpeza e utensílios domésticos")
elif(codigo<1 or codigo>15):
    print("Inválido")