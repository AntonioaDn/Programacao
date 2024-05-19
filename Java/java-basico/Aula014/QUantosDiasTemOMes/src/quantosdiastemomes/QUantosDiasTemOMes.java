/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package quantosdiastemomes;

/**
 *
 * @author anton
 */
public class QUantosDiasTemOMes {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String vetormeses[] = {"Jan","Fev","Mar","Abr","Mai","Jun","Jul","Ago","Set","Out","Nov","Dez"};
        int vetordias[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i=0; i<vetordias.length; i++) {
            System.out.println("O mes de " + vetormeses[i] + " tem " + vetordias[i] + " dias.");
        }
    }
    
}
