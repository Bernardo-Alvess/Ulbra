def f(vetor, n):
    if n == 0:
        return 0
    else:
        s = f(vetor, n - 1)
        if vetor[n-1] > 0:
            s = s + vetor[n-1]
        return s
        
vetor = [2, -4, 7, 0, -1, 4]

print(f(vetor, 6))
