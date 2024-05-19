/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package operadorternario;

import java.util.Scanner;

/**
 *
 * @author anton
 */
public class OperadorTernario {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner teclado = new Scanner(System.in);
        System.out.print("Digite um número: ");
        int n1 = teclado.nextInt();
        System.out.print("Digite outro número: ");
        int n2 = teclado.nextInt();
        int maior = n1 > n2 ? n1 : n2;
        System.out.println(String.format("O maior número é o %d", maior));
        
    }
    
}
