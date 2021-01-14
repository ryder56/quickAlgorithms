

def fibonacci(x):
    if x == 0 or x == 1:
        return 1
    else:
        return fibonacci(x-1) + fibonacci(x-2)

def fib(x):
    a = 0
    b = 1
    if x == 0:
        return a
    else:
        for j in range(2, x + 1):
            c = a + b
            a = b
            b = c
        return b


#for i in range(0,100):
    #print(i, ": ", fibonacci(i), end = ", ")
    #if(i%5 == 0):
       #print("")

f = open('fibOutput.txt', 'w')


for i in range(0, 100000):
    a = str("%d : %d\n" % (i, fib(i)))
    f.writelines(a)
    #f.print(i, ": ", fib(i), end = ", ")
    #if i % 1 == 0:
       #f.print("")

