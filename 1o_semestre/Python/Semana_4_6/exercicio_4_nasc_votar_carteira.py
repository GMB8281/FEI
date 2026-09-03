nasc=int((input("Digite seu ano de nascimento: ")));print("Atenção! Esse programa só considera a idade a partir do ano, favor desconsiderar se não fez aniversário ainda...");

idade=2026-nasc

if (idade>=16 and idade <18):
    print("\nTem idade para votar.")
elif(idade>=18):
    print("\nTem idade para votar.\nTem idade para conseguir a Carteira de Habilitação.")