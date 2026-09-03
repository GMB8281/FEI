def fatorial(n):
    fatorial=n
    if(n>0):
        for n in range (n,2,-1):
            fatorial=fatorial*(n-1)
    elif(n<0):
        for n in range (n,-2):
            fatorial=fatorial*(n+1)
    elif(fatorial==0 or fatorial==-0):
        fatorial=1
    return fatorial

x=int(input())
print(fatorial(x))