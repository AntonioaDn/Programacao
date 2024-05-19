/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package classes;

/**
 *
 * @author anton
 */
public class Fatorial {
    private int num = 0;
    private int fat = 1;
    private String formula = "";
    
    public void setValue (int n) {
        num = n;
        int f=1;
        String form = "";
        if (num == 0) {
            form = "0! = ";
            formula = form;
            fat = 1;
        } else {
            for (int c = n; c > 1; c--) {
            f *= c;
            form += c + " x ";
        }
            form += "1 = ";
            formula = form;
            fat = f;
        }
        
    }
    
    public int getFatorial() {
        return fat;
    }
    
    public String getFormula() {
        return formula;
    }
}
