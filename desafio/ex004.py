# Faça um programa que leia algo pelo teclado e mostre na
# tela o seu tip primitivo e todas as informações sobre ele.

alpha = input('Digite algo: ')

print('O tipo de alpha é: {}'.format(type(alpha)))

print('alpha isAscii      | {}'.format(alpha.isascii()))
print('alpha isDigit      | {}'.format(alpha.isdigit()))
print('alpha isIdentifier | {}'.format(alpha.isidentifier()))
print('alpha isANum       | {}'.format(alpha.isalnum()))
print('alpha isANumeric   | {}'.format(alpha.isnumeric()))
print('alpha isPrintable  | {}'.format(alpha.isprintable()))
print('alpha isSpace      | {}'.format(alpha.isspace()))
print('alpha isUpper      | {}'.format(alpha.isupper()))
print('alpha isAlpha      | {}'.format(alpha.isalpha()))
print('alpha isDecimal    | {}'.format(alpha.isdecimal()))
print('alpha isLower      | {}'.format(alpha.islower()))
print('alpha isTitle      | {}'.format(alpha.istitle()))
