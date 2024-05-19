package aula11.herançascompessoas;

public class Aula11HerançasComPessoas {

    public static void main(String[] args) {
        Visitante v1 = new Visitante();
        v1.setNome("Juvenal");
        v1.setIdade(22);
        v1.setSexo('M');
        System.out.println(v1.toString());
        Aluno a1 = new Aluno();
        a1.setCurso("CC");
        a1.setMatricula(1);
        a1.setMatriculado(true);
        a1.setNome("Antonio");
        a1.pagarMensalidade();
        Bolsista b1 = new Bolsista(); 
        b1.setNome("Andre");
        b1.setBolsa(55.5f);
    }
    
}
