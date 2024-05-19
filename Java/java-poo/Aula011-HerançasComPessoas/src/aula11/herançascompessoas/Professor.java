package aula11.herançascompessoas;

public class Professor extends Pessoa {
    private String especialidade;
    private float salario;
    
    public void aumentarSalario(float aumento) {
        this.setSalario(this.getSalario() + aumento);
    }

    public String getEspecialidade() {
        return especialidade;
    }

    public void setEspecialidade(String especialidade) {
        this.especialidade = especialidade;
    }

    public float getSalario() {
        return salario;
    }

    public void setSalario(float salario) {
        this.salario = salario;
    }
    
    
}
