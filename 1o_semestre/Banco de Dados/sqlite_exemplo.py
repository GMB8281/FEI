# -*- coding: utf-8 -*-

import sqlite3
BD_NOME_ARQUIVO = 'teste.db'

conexao = sqlite3.connect(BD_NOME_ARQUIVO)
print(f"Banco de dados '{BD_NOME_ARQUIVO}' conectado com sucesso")
cursor = conexao.cursor()

# criação da tabela
cursor.execute("""
CREATE TABLE IF NOT EXISTS empregado
(
    ID INT PRIMARY KEY NOT NULL,
    NOME TEXT NOT NULL,
    EMAIL TEXT NOT NULL
)
""")

conexao.commit()

# insere dados na tabela que foi criada
sql_insert = "INSERT OR IGNORE INTO empregado (ID, NOME, EMAIL) VALUES (?, ?, ?)"
dados = [
    (1, 'Ada Lovelace', 'ada@lovelace.com'),
    (2, 'Radia Perlman', 'Radia@Perlman.com'),
    (1, 'Ada Lovelace Duplicada', 'ada2@lovelace.com')
]
cursor.executemany(sql_insert, dados)

conexao.commit()
print(f"Dados inseridos com sucesso (ou ignorados se já existiam). Linhas processadas: {cursor.rowcount}")

# faz uma consulta para recuperar os dados armazenados
cursor.execute("SELECT ID, NOME, EMAIL FROM empregado")
rows = cursor.fetchall()

print("\n--- Dados Atuais na Tabela ---")
for data in rows:
    print(f"ID    : {data[0]}")
    print(f"NOME  : {data[1]}")
    print(f"EMAIL : {data[2]}")
    print("-----------------------------")
print('Dados buscados com sucesso')

# atualiza dados no banco
sql_update = "UPDATE empregado SET EMAIL = ? WHERE ID = ?"
novo_email = 'atualizado@gmail.com'
id_para_atualizar = 1
cursor.execute(sql_update, (novo_email, id_para_atualizar))

conexao.commit()
print("Dados atualizados com sucesso")
print(f"Total de linhas afetadas: {cursor.rowcount}")

# deleta dados no banco
sql_delete = "DELETE FROM empregado WHERE ID = ?"
id_para_excluir = 1
cursor.execute(sql_delete, (id_para_excluir,))

conexao.commit()
print("Dados excluídos com sucesso")
print(f"Total de linhas afetadas: {cursor.rowcount}")

# fecha a conexão (e o arquivo)
cursor.close()
conexao.close()
print("\nScript finalizado.")
