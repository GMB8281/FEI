import sqlite3

conexao = sqlite3.connect(r"banco.sqlite")
cursor = conexao.cursor()
resultado = cursor.execute("SELECT * FROM track")
print(resultado)

'''Executa a query e retorna o resulta formatado com os parâmetros pedidos'''
for dado in resultado.fetchall():
    print(f"TrakID: {dado[0]}),"
          f"Name: {dado [1]}),")
conexao.close()