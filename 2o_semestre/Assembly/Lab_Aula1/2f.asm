ORG 0000H
;2f)
MOV @R0,R0; move o registrador R0 para o espaco @R0 da memoria
MOV @R1,R1; move o registrador R1 para o espaco @R1 da memoria
MOV R2,@R1
ADD R2,@R2; tá bugado, refazer
;desafio) tirar raiz quadrada
