package aula12.animais.heranca;

public class Aula12AnimaisHeranca {

    public static void main(String[] args) {
        //Animal a = new Animal();
        Mamifero m = new Mamifero();
        Reptil r = new Reptil();
        Ave a = new Ave();
        Peixe p = new Peixe();
        
        /*m.setPeso(35.3f);
        m.setCorDoPelo("Marrom");
        m.alimentar();
        m.locomover();
        m.emitirSom();
        
        r.locomover();
        a.locomover();
        p.locomover();*/
        
        Canguru can = new Canguru();
        Cachorro car = new Cachorro();
        Tartaruga tar = new Tartaruga();
        Cobra cob = new Cobra();
        Goldfish gol = new Goldfish();
        Arara ara = new Arara();
        
        can.locomover();
        car.locomover();
        car.emitirSom();
    }
    
}
