ORG 0000H
MOV R0,#10H; 1a) movendo valor, com #
;se fosse em decimal...
;MOV R0,#16
;binário....
;MOV R0,#000010000B
MOV A,R0; 1b) movendo conteudo do R0 para A
MOV 50H,#20H; 1c) valor, com #
INC R2; 1d) incrementa registrador R2
DEC A; 1e) descrementa o acumulador A
CLR A; 1f) limpa o acumulador
;2b)
ADD A,R0
;2b)
MOV A,R3
ADD A,R2
;2c)
MOV A,R5
ADD A,#30
;2d)
MOV A,R1
SUBB A,#1
;2e)
MOV R2,R1
ADD R2,#31
;2f)
MOV @R0,R0; move o registrador R0 para o espaco @R0 da memoria
MOV @R1,R1; move o registrador R1 para o espaco @R1 da memoria
MOV R2,@R1
ADD R2,@R2
;desafio) tirar raiz quadrada
