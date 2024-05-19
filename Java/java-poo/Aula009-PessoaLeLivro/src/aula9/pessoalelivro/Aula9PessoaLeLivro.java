package aula9.pessoalelivro;

public class Aula9PessoaLeLivro {

    public static void main(String[] args) {
        Pessoa p[] = new Pessoa[2];
        Livro l[] = new Livro[3];
        
        p[0] = new Pessoa("Antonio", 18, "M");
        p[1] = new Pessoa("Ana", 19, "F");
        
        l[0] = new Livro("Jogos Vorazes: A cantiga dos passaros", 
                "Suzanne Collins", 600, p[1]);
        l[1] = new Livro("O Nome do Vento", "Patrick Rothfuss", 300, p[0]);
        
        System.out.println(l[0].detalhes());
        
    }
    
}
