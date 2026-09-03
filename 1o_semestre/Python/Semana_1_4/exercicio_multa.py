via=float(input("Digite a velocidade da via: "))
car=float(input("Digite a velocidade do carro: "))
coef=float(car/via)
if(coef<=1):
    print("Velocidade do carro esta dentro da velocidade da via")
else:
    porcentagem=(coef*100)-100
    print("Velocidade %d %% acima do limite" %porcentagem)
    if(coef<=1.2):
        print("Penalidade: Multa de R$ 130,16")
        print("Pontuação: 4 pontos na CNH")
    elif(coef<=1.5):
        print("Penalidade: Multa de R$ 195,23")
        print("Pontuação: 5 pontos na CNH")
    elif(coef>1.5):
        print("Penalidade: Multa de R$ 880,41")
        print("Pontuação: 7 pontos na CNH")