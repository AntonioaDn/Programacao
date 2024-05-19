/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package repeticaodowhile;

import java.util.Scanner;

/**
 *
 * @author anton
 */
public class RepeticaoDoWhile {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner t = new Scanner(System.in);
        int n, s=0;
        String c;
        do {
            System.out.print("Digite um numero: ");
            n = t.nextInt();
            s += n;
            System.out.print("Quer continuar? [S/N]: ");
            c = t.next();
        } while (c.equals("S"));
        System.out.println("A soma dos numeros eh: " + s);
    }
    
}
