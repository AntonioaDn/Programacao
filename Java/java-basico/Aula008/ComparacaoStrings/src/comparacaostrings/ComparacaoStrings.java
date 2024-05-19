/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package comparacaostrings;

/**
 *
 * @author anton
 */
public class ComparacaoStrings {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String nome1 = "Antonio";
        String nome2 = "Antonio";
        String nome3 = new String("Antonio");
        String resultado =  (nome1 == nome3) ? "Iguais":"Diferentes";
        System.out.println(resultado);
        
    }
    
}
