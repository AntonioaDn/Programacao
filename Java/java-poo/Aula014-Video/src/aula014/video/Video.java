package aula014.video;

public class Video implements AcoesVideo {
    private String titulo;
    private float avaliacao;
    private int views;
    private int curtidas;
    private boolean assistindo;
    
    
    @Override
    public void play() {
        this.setAssistindo(true);
    }

    @Override
    public void pause() {
        this.setAssistindo(false);
    }

    @Override
    public void like() {
        this.setCurtidas(this.getCurtidas() + 1);
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public float getAvaliacao() {
        return avaliacao;
    }

    public void setAvaliacao(float avaliacao) {
        this.avaliacao = avaliacao;
    }

    public int getViews() {
        return views;
    }

    public void setViews(int views) {
        this.views = views;
    }

    public int getCurtidas() {
        return curtidas;
    }

    public void setCurtidas(int curtidas) {
        this.curtidas = curtidas;
    }

    public boolean isAssistindo() {
        return assistindo;
    }

    public void setAssistindo(boolean assistindo) {
        this.assistindo = assistindo;
    }
    
}
