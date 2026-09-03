x=int(input())
y=int(input())
z=int(input())

if (x>y and x>z):
    primeiro=x
elif (y>x and y>z):
    primeiro=y
elif (z>x and z>y):
    primeiro=z

if(primeiro==x):
    if (y>x):
        segundo=y
    else:
        segundo=z

if(primeiro==y):
    if (x>z):
        segundo=x
    else:
        segundo=z

if(primeiro==z):
    if(x>y):
        segundo=x
    else:
        segundo=y

if(primeiro==x):
    if (segundo==y):
        terceiro=z
    else:
        terceiro=y

if(primeiro==y):
    if (segundo==x):
        terceiro=z
    else:
        terceiro=x

if(primeiro==z):
    if (segundo==y):
        terceiro=x
    else:
        terceiro=y

print("%d" %primeiro)
print("%d" %segundo)
print("%d" %terceiro)