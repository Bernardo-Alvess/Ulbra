string = 'string de teste para as vogais'

count = 0
for i in string:
    if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u':
        count += 1

print(f'A string tem {count} vogais')