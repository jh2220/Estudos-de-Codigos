# Faça um algoritimo que leia o preço de um produto e mostre seu novo preço, com 5% de desconto.

value = float(input('Digite o valor do produto: '))

newValue = (5 * value)
newValue /= 100
newValue = value - newValue

print('O valor do produto com 5% de desconto é de R$:{:.2f}'.format(newValue))
