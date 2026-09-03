def magic_data(dia,mes,ano):
    x=ano%100
    if (dia*mes==x):
        print(f"Data mágica: {dia}/{mes}/{ano}")

dia=1
mes=1
ano=1901

while (ano<=2026):
    while (mes<=12):
        while (dia<=31):
            magic_data(dia,mes,ano)
            dia=dia + 1
        dia=1
        mes=mes + 1
    mes=1
    ano=ano+1