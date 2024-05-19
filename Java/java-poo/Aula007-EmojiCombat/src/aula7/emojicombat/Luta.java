package aula7.emojicombat;

import java.util.Random;

public class Luta {
    //Atributos
    private Lutador desafiado;
    private Lutador desafiante;
    private int rounds;
    private boolean aprovada;
    //Métodos públicos
    
    public void marcarLuta (Lutador l1, Lutador l2) {
        if ((l1.getCategoria().equals(l2.getCategoria())) && (l1 != l2)) {
            this.setAprovada(true);
            this.setDesafiado(l1);
            this.setDesafiante(l2);
            System.out.println("Luta marcada com sucesso.");
        } else {
            this.setAprovada(false);
            this.setDesafiado(null);
            this.setDesafiante(null);
            System.out.println("A luta nao pode ser marcada.");
        }
    }
    
    public void lutar () {
        if (this.aprovada) {
            Random random = new Random();
            System.out.println("-----Desafiado-----");
            this.desafiado.apresentar();
            System.out.println("-----Desafiante-----");
            this.desafiante.apresentar();
            int vencedor = (random.nextInt()) % 3;
            switch(vencedor) {
                case 0:
                    System.out.println("----------");
                    System.out.println("A luta empatou.");
                    System.out.println("----------");
                    this.desafiado.empatarLuta();
                    this.desafiante.empatarLuta();
                    break;
                case 1:
                    System.out.println("----------");
                    System.out.println("O desafiado " + 
                            this.desafiado.getNome() + " ganhou a luta.");
                    System.out.println("----------");
                    this.desafiado.ganharLuta();
                    this.desafiante.perderLuta();
                    break;
                case 2:
                    System.out.println("----------");
                    System.out.println("O desafiante " + this.desafiante.getNome() + "ganhou a luta.");
                    System.out.println("----------");
                    this.desafiado.perderLuta();
                    this.desafiante.ganharLuta();
                    break;
            }
        } else {
            System.out.println("A luta nao foi aprovada, portanto nao pode acotecer");
        }
    }

    public Lutador getDesafiado() {
        return desafiado;
    }

    public void setDesafiado(Lutador desafiado) {
        this.desafiado = desafiado;
    }

    public Lutador getDesafiante() {
        return desafiante;
    }

    public void setDesafiante(Lutador desafiante) {
        this.desafiante = desafiante;
    }

    public int getRounds() {
        return rounds;
    }

    public void setRounds(int rounds) {
        this.rounds = rounds;
    }

    public boolean isAprovada() {
        return aprovada;
    }

    public void setAprovada(boolean aprovada) {
        this.aprovada = aprovada;
    }
}
