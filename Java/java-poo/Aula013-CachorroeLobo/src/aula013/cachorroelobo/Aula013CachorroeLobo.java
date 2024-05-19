package aula013.cachorroelobo;

public class Aula013CachorroeLobo {

    public static void main(String[] args) {
        Mamifero x = new Mamifero();
        //x.emitirSom();
        Cachorro c = new Cachorro();
        c.emitirSom();
        Lobo l = new Lobo();
        //l.emitirSom();
        c.reagir("pacifico");
        c.reagir("agressivo");
        c.reagir(11, 45);
        c.reagir(21, 00);
        c.reagir(true);
        c.reagir(false);
        c.reagir(2, 12.5f);
        c.reagir(17, 4.5f);
    }
    
}
