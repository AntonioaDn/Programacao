package aula10.herancas;

public class Aula10Herancas {

    public static void main(String[] args) {
        Pessoa p1 = new Pessoa();
        Aluno p2 = new Aluno();
        Professor p3 = new Professor();
        Funcionario p4 = new Funcionario();
        
        p1.setNome("Antonio");
        p2.setNome("Ana");
        p3.setNome("Pedro");
        p4.setNome("Alice");
        
        p1.setIdade(19);
        p2.setIdade(19);
        p3.setIdade(10);
        p4.setIdade(9);
        
        p1.setSexo('m');
        p2.setSexo('f');
        p3.setSexo('m');
        p4.setSexo('f');
        
        System.out.println(p1.toString());
        System.out.println(p2.toString());
        System.out.println(p3.toString());
        System.out.println(p4.toString());
    }
    
}
