# Crie um algoritimo que leia o número e mostre o seu dobro, triplo e raiz quadrada
import math
value = int(input('Digite um valor: '))

double = value * 2
triple = value * 3
resultSqrt = math.sqrt(value)

print('O dobro é {} \nO triplo é {} \nE a raiz quadrada é {:.2f}'.format(double, triple, resultSqrt))
