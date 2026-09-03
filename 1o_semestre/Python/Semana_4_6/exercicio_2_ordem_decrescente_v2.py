x=int(input());y=int(input());z=int(input())

if (x>=y and x>=z):
    print("\n%d" %x)
    if (z>=y):
        print("%d\n%d" %(z,y))    
    else:
        print("%d\n%d" %(y,z))

if (y>=x and y>=z):
    print("\n%d" %y)
    if (z>=y):
        print("%d\n%d" %(z,y))
    else:
        print("%d\n%d" %(y,z))

if (z>=x and z>=y):
    print("\n%d" %z)
    if (x>=y):
        print("%d\n%d" %(x,y))
    else:
        print("%d\n%d" %(y,x))