x=int(input())
fatorial=x

if(x>0):
    for x in range (x,2,-1):
        fatorial=fatorial*(x-1)
elif(x<0):
    for x in range (x,-2):
        fatorial=fatorial*(x+1)
elif(fatorial==0 or fatorial==-0):
    fatorial=1

print("%d"%fatorial)