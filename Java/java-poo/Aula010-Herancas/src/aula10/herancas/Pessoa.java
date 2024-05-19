package aula10.herancas;

public class Pessoa {
    private int idade;
    private String nome;
    private char sexo;
    
    public void fazerAniversario() {
        this.setIdade(this.getIdade() + 1);
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public char getSexo() {
        return sexo;
    }

    public void setSexo(char sexo) {
        this.sexo = sexo;
    }

    @Override
    public String toString() {
        return "-----------------\n" +
                "Pessoa{" + "\nidade=" + idade + "\n, nome=" + nome + "\n, sexo=" + sexo + "\n}";
    }
    
    
}
