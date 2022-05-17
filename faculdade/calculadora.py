class Calculadora:
    '''
    O valor Memoria eh o valor da calculadora, em seu caso quando ligamos a calculadora o seu valor eh zero
    Ate que desligamos elas, adicionei uma funcao que nao foi solicitado
    resetMemoria() -> sua funcao eh zerar o valor
    '''
    memoria = 0
    def resetMemoria(self):
        self.memoria = 0
    '''
        todas os metodos desta classe estao com um retorno para que possa posteriormente ser usado em uma funcao ou
        resposta, neste caso nao sera usada para nada, mas um exemplo que eu poderia dar para isso seria algo como
        print(minhaCalculadora.subitrair(ValorA, ValorB))
        ---
        Todos os Set's do valor da memoria eh de receber (=) em vez de somar ou subtrair (+= ou -=) essa decisao foi
        tomada devido que se o usuario quiser continuar o valor da memoria em uma divisao por exemplo ele pode usar
        essa classe da seguinte forma nomeClasse.dividir(nomeClass.memoria, intValue)        
    '''
    def somar(self, valueA, valueB):
        self.memoria = valueA + valueB
        return valueA + valueB
    def subitrair(self, valueA, valueB):
        self.memoria = valueA - valueB
        return valueA - valueB
    def dividir(self, valueA, valueB):
        self.memoria = valueA / valueB
        return valueA / valueB
    def multiplicar(self, valueA, valueB):
        self.memoria = valueA * valueB
        return valueA * valueB

'Vamos teste a classe?'
minhaCalculadora = Calculadora()

minhaCalculadora.somar(25, 10)
print(minhaCalculadora.memoria)

'Retorno com o Print'
print("O retorno da subitracao eh: {}".format(minhaCalculadora.subitrair(32, 5)))

'Uso da memoria'
print(minhaCalculadora.memoria)
minhaCalculadora.dividir(minhaCalculadora.memoria, 2)
print(minhaCalculadora.memoria)
minhaCalculadora.multiplicar(minhaCalculadora.memoria, 4)
print(minhaCalculadora.memoria)

'limpando a memoria'
print(minhaCalculadora.memoria)
minhaCalculadora.resetMemoria()
print(minhaCalculadora.memoria)
