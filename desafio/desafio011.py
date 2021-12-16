# Faça um programa que leia a largura e a altura de uma parede em metros, calcule a sua área e a quantidade que tinha
# nescessária para pínta-la, sabendo que cada litro de tinta, pinta uma área de 2m².

largura = int(input('Digite a largura em metros: '))
altura = int(input('Digite a altura em metros: '))

area = largura * altura

print('Será nescessário {} baldes de tinta para pintar a parede'.format(area / 2))