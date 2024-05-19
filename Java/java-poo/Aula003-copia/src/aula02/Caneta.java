package aula02;

public class Caneta {
    public String modelo;
    public String cor;
    private float ponta;
    protected int carga;
    protected boolean tampada;
    
    public void rabiscar () {
        if (this.tampada == true) {
            System.out.println("A caneta " + this + "não pode rabiscar");
        } else {
            System.out.println("A caneta " + this + "está rabiscando");
        }
    }
    
    public void tampar () {
        this.tampada = true;
    }
    
    public void destampar () {
        this.tampada = false;
    }
    
    public void status() {
        System.out.println("Uma caneta do modelo " + this.modelo);
        System.out.println("Uma caneta da cor " + this.cor);
        System.out.println("Uma caneta de ponta " + this.ponta);
        System.out.println("A caneta está com carga " + this.carga + "%");
        System.out.println("Caneta tampada = " + this.tampada);
    }
}
