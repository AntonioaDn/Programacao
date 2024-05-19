/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package preenchendovetoresjava;

import java.util.Arrays;

/**
 *
 * @author anton
 */
public class PreenchendoVetoresJava {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int vetor[] = new int[20];
        Arrays.fill(vetor, 0);
        for (int valor: vetor) {
            System.out.print(valor + " ");
        }
        System.out.println("");
    }
    
}
