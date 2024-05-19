package aula9.pessoalelivro;

public interface Publicacao {
    //abrir, fechar, folhear, avancarPag e voltarPag
    public abstract void abrir ();
    public abstract void fechar();
    public abstract void folhear(int p);
    public abstract void avancarPag();
    public abstract void voltarPag();
}
