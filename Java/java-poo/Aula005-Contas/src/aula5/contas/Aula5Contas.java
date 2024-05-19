package aula5.contas;
public class Aula5Contas {
    public static void main(String[] args) {
        Conta c1 = new Conta();
        c1.setDono("Jubileu");
        c1.setNumConta("1111");
        c1.abrirConta("cc");
        c1.depositar(300);
        
        Conta c2 = new Conta();
        c2.setDono("Creuza");
        c2.setNumConta("2222");
        c2.abrirConta("cp");
        
        c2.mostrarStatus();
        c1.mostrarStatus();
        
    }
}
