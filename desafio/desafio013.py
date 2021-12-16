# Faça um algoritimo que leia o salário de um funcionário e mostre seu novo salário com um almento de 15%

value = float(input('Digite o salário do funcionário: '))

newValue = (15 * value)
newValue /= 100
newValue = value + newValue

print('O novo salário será de R$:{:.2f}'.format(newValue))
