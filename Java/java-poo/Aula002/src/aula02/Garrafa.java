package aula02;

public class Garrafa {
    String cor;
    String liquido;
    boolean tampada;
    String formato;
    int mls;
    
    void destampar () {
        this.tampada = false;
    }
    
    void tampar () {
        this.tampada = true;
    }
    
    void beberConteudo () {
        if (this.tampada == true) {
            System.out.println("Não é possível beber com a garrafa tampada.");
        } else {
            this.mls -= 10;
            System.out.println("Foram bebidos 10 ml da garrafa.");
        }
    }
    
    void status () {
        System.out.println(this);
        System.out.println("Cor dessa garrafa: " + this.cor);
        System.out.println("Liquido dessa garrafa: " + this.liquido);
        System.out.println("Essa garrafa está tampada? " + this.tampada);
        System.out.println("Formato dessa garrafa: " + this.formato);
        System.out.println("Quantidade de mls dessa garrafa: " + this.mls);
        /*
        String cor;
        String liquido;
        boolean tampada;
        String formato;
        int mls;
        */
    }
}
