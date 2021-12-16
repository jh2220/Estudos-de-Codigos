# Crie um programa que leia quanto dinheiro tem na carteira e mostre qunatos Dólares ela pode comprar
# Considere que o valor do dolar é de 5.68 16/12/2021

value = float(input('Qual seu valor em real: '))

print('Seu valor em dolar é de ${:.2f}'.format(value / 5.68))
