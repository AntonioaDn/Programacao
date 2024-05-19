package aula014.video;

public abstract class Pessoa {
    protected String nome;
    protected int idade;
    protected char sexo;
    protected float experiencia;

    public Pessoa(String nome, int idade, char sexo) {
        this.nome = nome;
        this.idade = idade;
        this.sexo = sexo;
        this.setExperiencia(0);
    }

    @Override
    public String toString() {
        return "Pessoa{" + "nome=" + nome + "\n, idade=" + idade + "\n, sexo=" + 
                sexo + "\n, experiencia=" + experiencia + '}';
    }
    
    
    
    public void ganharExp() {
        
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public char getSexo() {
        return sexo;
    }

    public void setSexo(char sexo) {
        this.sexo = sexo;
    }

    public float getExperiencia() {
        return experiencia;
    }

    public void setExperiencia(float experiencia) {
        this.experiencia = experiencia;
    }
    
}
