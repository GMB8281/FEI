def acha_menor_vetor(x:list) -> float:
    y=x[0]
    for i in range (0, len(x)):
        if y > x[i]:
            y=x[i]
    return y

T = [11, 7, 2, 4]

print(acha_menor_vetor(T))