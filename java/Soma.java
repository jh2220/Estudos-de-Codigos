package com.empresa.soma;
//importacao da biblioteca "java util" para utilizar o Scanner
import java.util.Scanner;

public class Soma {
    
    public static void main(String[] args) {
        
        System.out.println("Hello World!");
        Scanner scanner = new Scanner(System.in);
        scanner.useDelimiter("\n");

        System.out.print("Digite o valor de A: ");
        int valorA = scanner.nextInt();

        System.out.print("Digite o valor de B: ");
        int valorB = scanner.nextInt();

        /**Quis guardar uma variavel soma para que possa usar posteriormente, caso
        *  do contrario apenas apresentaria a + b na resposta do console
        */
        int soma = valorA + valorB;
        
        System.out.println("\nA soma dos valores de A + B é: " + soma);
    }
}
