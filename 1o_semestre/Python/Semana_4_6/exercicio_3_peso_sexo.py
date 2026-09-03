h=float(input("Digite a altura (em metros): "));sexo=input("Digite o sexo: ");

match sexo:
    case "H"|"Masculino"|"Homem"|"Man":
        peso=float((72.7 * h)-58)
    case "M"|"Feminino"|"Mulher"|"Woman"|"F":
        peso=float((62.1 * h)-44.7)

print("%.2f kg" %peso)