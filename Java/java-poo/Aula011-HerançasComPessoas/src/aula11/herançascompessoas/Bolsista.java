package aula11.herançascompessoas;

public class Bolsista extends Aluno{
    private float bolsa;
    
    public void renovarBolsa() {
        System.out.println("Renovando a bolsa de " + this.nome + ".");
    }
    
    @Override
    public void pagarMensalidade() {
        System.out.println(this.nome + " e bolsista! Pagamento facilitado.");
    }

    public float getBolsa() {
        return bolsa;
    }

    public void setBolsa(float bolsa) {
        this.bolsa = bolsa;
    }

}
 