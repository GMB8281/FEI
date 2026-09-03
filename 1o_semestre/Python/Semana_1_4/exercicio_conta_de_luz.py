kWh=float(input("Digite a quantidade de kWh: "))
total=kWh*0.85
if (kWh>200):
    total=total+50
    print("Valor da conta: R$ %.2f" %total)
    print("Taxa extra foi aplicada.")
else:
    print("Valor da conta: R$ %.2f" %total)