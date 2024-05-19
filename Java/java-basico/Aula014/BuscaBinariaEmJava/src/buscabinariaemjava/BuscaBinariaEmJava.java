/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package buscabinariaemjava;

import java.util.Arrays;

/**
 *
 * @author anton
 */
public class BuscaBinariaEmJava {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int vetor[] = {7, 3, 4, 6, 2, 9, 4, 5, 4};
        int pos = Arrays.binarySearch(vetor, 2);
        for (int valor: vetor) {
            System.out.print(valor + " ");
        }
        System.out.println("\nEncontrei o valor na posicao " + pos);
    }
    
}
