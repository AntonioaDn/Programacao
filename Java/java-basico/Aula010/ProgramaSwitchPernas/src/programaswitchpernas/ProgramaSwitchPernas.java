/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package programaswitchpernas;

import java.util.Scanner;

/**
 *
 * @author anton
 */
public class ProgramaSwitchPernas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner teclado = new Scanner (System.in);
        System.out.print("Quantas pernas o animal tem? ");
        int pernas = teclado.nextInt();
        String tipo;
        switch(pernas) {
            case 1:
                tipo = "Saci";
                break;
            case 2:
                tipo = "Bipede";
                break;
            case 4 : 
                tipo = "Quadrupede";
                break;
            case 6, 8:
            
        }
    }
    
}
