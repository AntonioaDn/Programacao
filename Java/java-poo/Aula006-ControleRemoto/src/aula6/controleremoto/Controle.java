package aula6.controleremoto;
public class Controle implements Controlador {
    private int volume;
    private boolean ligado;
    private boolean tocando;
    
    
    public void Controle() {
        this.setVolume(50);
        this.setTocando(false);
        this.setLigado(false);
    }

    public int getVolume() {
        return volume;
    }

    public boolean isLigado() {
        return ligado;
    }

    public boolean isTocando() {
        return tocando;
    }

    public void setVolume(int volume) {
        this.volume = volume;
    }

    public void setLigado(boolean ligado) {
        this.ligado = ligado;
    }

    public void setTocando(boolean tocando) {
        this.tocando = tocando;
    }

    @Override
    public void ligar() {
        this.setLigado(true);
    }

    @Override
    public void desligar() {
        this.setLigado(false);
    }

    @Override
    public void maisVolume() {
        if (this.isLigado()) {
            if (this.getVolume() > 0) {
                this.setVolume(this.getVolume() + 5);
            } else {
                System.out.println("Mudo...");
            }
        } else {
            
        }
    }

    @Override
    public void menosVolume() {
        if (this.isLigado()) {
            if (this.getVolume() > 0) {
                this.setVolume(this.getVolume() - 5);
            } else {
                System.out.println("Mudo...");
            }
        } else {
            
        }
    }

    @Override
    public void abrirMenu() {
        System.out.println("Esta ligado? " + this.isLigado());
        System.out.println("Está tocando? " + this.isTocando());
        System.out.print("Volume: ");
        for (int i=0; i <= this.getVolume(); i += 10) {
            System.out.print("|");
        }
        System.out.println("");
    }

    @Override
    public void fecharMenu() {
        System.out.println("Fechando Menu...");
    }

    @Override
    public void ligarMudo() {
        if (this.isLigado() && this.getVolume() > 0) {
            this.setVolume(0);
        }
    }

    @Override
    public void desligarMudo() {
        if (this.isLigado() && this.getVolume() == 0) {
            this.setVolume(50);
        }
    }

    @Override
    public void play() {
        if (this.isLigado() && !(this.isTocando())) {
            this.setTocando(true);
        }
    }

    @Override
    public void pause() {
        if (this.isLigado() && this.isTocando()) {
            this.setTocando(false);
        }
    }
}
