def fatorial(n):
    if n == 0:
        return 1
    else:
        return n * fatorial(n-1)


def fatorial1(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result


def fatorial2(n):
    if n == 1:
        return 1
    else:
        return n * fatorial(n)
    

def fatorial3(n):
    result = 1
    for i in range(n):
        result *= n
    return result

