''' x=quanto ganha por hora
    y= horas trabalhadas
    11% para o imposto de renda
    8% para o INSS
    5% para o sindicato'''
    
x=float(input("Digite o valor da hora de trabalho: "))
y=float(input("\nDigite o numero de horas trabalhadas no mes: "))

salariobruto=float(x*y)
IR=float(salariobruto*0.11)
INSS=float(salariobruto*0.08)
sindicato=float(salariobruto*0.05)
salarioliquido= float(salariobruto-IR-INSS-sindicato)

print("* Salario Bruto: R$ %.2f" %salariobruto)
print("- IR (11%%): R$ %.2f" %IR)
print("- INSS (8%%): R$ %.2f" %INSS)
print("- Sindicato (5%%): R$ %.2f" %sindicato)

print("+ Salario Liquido: R$ %.2f" %salarioliquido)

