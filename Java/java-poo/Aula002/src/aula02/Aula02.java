package aula02;

public class Aula02 {

    public static void main(String[] args) {
        /*Caneta c1 = new Caneta();
        c1.cor = "Azul";
        c1.ponta = 0.5f;
        c1.tampada = false;
        c1.tampar();
        c1.status();
        c1.rabiscar();
        Caneta c2 = new Caneta();
        c2.cor = "vermelho";
        c2.ponta = 1.0f;
        c2.destampar();
        c2.rabiscar();*/
        Garrafa g1 = new Garrafa();
        g1.cor = "Vermelha";
        g1.formato = "Cilindrico";
        g1.liquido = "agua";
        g1.mls = 1000;
        g1.tampada = false;
        g1.beberConteudo();
        g1.beberConteudo();
        g1.tampar();
        g1.beberConteudo();
        g1.status();
        
    }
    
}
