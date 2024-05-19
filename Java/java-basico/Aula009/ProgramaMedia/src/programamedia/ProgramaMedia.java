/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package programamedia;

import java.time.LocalDate;
import java.util.Scanner;

/**
 *
 * @author anton
 */
public class ProgramaMedia {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner teclado = new Scanner(System.in);
        /*System.out.print("Digite a primeira nota: ");
        float nota = teclado.nextFloat();
        if (nota >= 9) {
            System.out.println("Parabéns");
        }*/
        System.out.print("Digite o ano de nascimento: ");
        LocalDate dataatual = LocalDate.now();
        int anoatual = dataatual.getYear();
        int anon = teclado.nextInt();
        if ((anoatual - anon) >= 18) {
            System.out.println("Maior de idade.");
        } else {
            System.out.println("Menor de idade.");
        }
    }
}

