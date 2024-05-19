/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exerciciocomjoptionpane;
import javax.swing.JOptionPane;

/**
 *
 * @author anton
 */
public class ExercicioComJOptionPane {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*JOptionPane.showMessageDialog(null, "Olá mundo!", "Boas vindas", 0);*/
        //Total de valores, total de pares, total de ímpares, acima de 100, media total.
        int n, total, pares, impares, acima, soma;
        double media;
        total = pares = impares = acima = soma = 0;
        do {
            n = Integer.parseInt(JOptionPane.showInputDialog(null, "<html>Informe um número: "
                    + "<br>(0 encerra)</html>"));
            if (n == 0) {
                if (total == 0) {
                    break;
                }
                media = soma/total;
                JOptionPane.showMessageDialog(null, String.format("<html>Total de valores: %d<br>Total de pares: %d<br>"
                    + "Total de impares: %d<br>Valores acima de 100: %d<br>Media dos valores digitados: %.3f</html>",
                    total, pares, impares, acima, media));

                break;
            }
            total++;
            if (n % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
            if (n > 100) {
                acima++;
            }
            soma += n;
        } while (n != 0);
        
    }
    
}
