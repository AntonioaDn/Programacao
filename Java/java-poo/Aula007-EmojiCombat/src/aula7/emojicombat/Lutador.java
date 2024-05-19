package aula7.emojicombat;
public class Lutador {
    private String nome;
    private String nacionalidade;
    private int idade;
    private float altura;
    private float peso;
    private String categoria;
    private int vitorias;
    private int empates;
    private int derrotas;

    public Lutador(String no, String na, int id, float al, float pe, int vi, int de, int em) {
        this.nome = no;
        this.nacionalidade = na;
        this.idade = id;
        this.altura = al;
        this.setPeso(pe);
        this.vitorias = vi;
        this.empates = em;
        this.derrotas = de;
    }
    
    public void apresentar() {
        System.out.println("------------------------------");
        System.out.println("Lutador " + this.nome);
        System.out.println("Nacionalidade: " + this.nacionalidade);
        System.out.println("Medindo " + this.altura + " metros de altura");
        System.out.println("Pesando " + this.peso + " kgs");
        System.out.println("Lutando pela categoria dos pesos " + this.categoria);
        System.out.println("Vitorias: " + this.vitorias + " Empates: " + 
                this.empates + " Derrotas: " + this.derrotas);
    }
        
    public void status () {
        System.out.println("------------------------------");
        System.out.println(this.nome);
        System.out.println("Categoria: " + this.getCategoria());
        System.out.println("Vitorias: " + this.getVitorias());
        System.out.println("Empates: " + this.getEmpates());
        System.out.println("Derrotas: " + this.getDerrotas());
    }
    
    public void ganharLuta () {
        this.setVitorias(this.getVitorias() + 1);
    }
        
    public void empatarLuta () {
        this.setEmpates(this.getEmpates() + 1);
    }

    public void perderLuta () {
        this.setDerrotas(this.getDerrotas() + 1);
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNacionalidade() {
        return nacionalidade;
    }

    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
        this.setCategoria();
    }

    public String getCategoria() {
        return categoria;
    }

    public void setCategoria() {
        if (this.getPeso() < 52.2) {
            this.categoria = "Invalido.";
        } else if (this.getPeso() <= 70.3) {
            this.categoria = "Leve";
        } else if (this.getPeso() <= 83.9) {
            this.categoria = "Medio";
        } else if (peso <= 120.2) {
            this.categoria = "Pesado";
        } else {
            this.categoria = "Invalido.";
        }
    }

    public int getVitorias() {
        return vitorias;
    }

    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getEmpates() {
        return empates;
    }

    public void setEmpates(int empates) {
        this.empates = empates;
    }

    public int getDerrotas() {
        return derrotas;
    }

    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }
 }