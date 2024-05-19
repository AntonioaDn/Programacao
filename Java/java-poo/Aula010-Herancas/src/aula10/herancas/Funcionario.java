package aula10.herancas;

public class Funcionario extends Pessoa{
    private String funcao;
    private boolean trabalhando;
    
    public void  mudarTrabalho(String novaFuncao) {
        this.setFuncao(novaFuncao);
    }

    public String getFuncao() {
        return funcao;
    }

    public void setFuncao(String funcao) {
        this.funcao = funcao;
    }

    public boolean isTrabalhando() {
        return trabalhando;
    }

    public void setTrabalhando(boolean trabalhando) {
        this.trabalhando = trabalhando;
    }
    
    
}
