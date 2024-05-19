package aula11.herançascompessoas;

public class Aluno extends Pessoa{
    private String curso;
    private int matricula;
    private boolean matriculado;
    
    public void cancelarMatricula() {
        System.out.println("Matricula cancelada.");
        this.setMatriculado(false);
    }
    
    public void pagarMensalidade() {
        System.out.println("Pagando mensalidade do aluno " + this.nome + ".");
    }
    
    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    public boolean isMatriculado() {
        return matriculado;
    }

    public void setMatriculado(boolean matriculado) {
        this.matriculado = matriculado;
    }
    
    
}
