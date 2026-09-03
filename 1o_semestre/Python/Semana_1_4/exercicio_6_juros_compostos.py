C=float(input("Capital inicial: "))
i=float(input("Taxa de juros mensal: "))
i=i/100
t=float(input("Meses para pagamento: "))
M=float(C*((1+i)**t))
print("M=%.2f" %M)