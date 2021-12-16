# Desenvolva um programa que leia as duas notas de um aluno, calcule e mostre sua média

n1 = int(input('Digite a primeira nota: '))
n2 = int(input('Digite a segunda nota: '))

media = (n1 + n2) / 2

print('A média de {} e {} é de {}'.format(n1, n2, media))
