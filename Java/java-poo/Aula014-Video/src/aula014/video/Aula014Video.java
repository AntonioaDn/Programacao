package aula014.video;

public class Aula014Video {

    public static void main(String[] args) {
        Gafanhoto g[] = new Gafanhoto[2];
        g[0] = new Gafanhoto("Antonio", 18, 'm', "antonioadn");
        g[1] = new Gafanhoto("Pedro", 10, 'm', "pedtrotd");
        System.out.println(g[0].toString());
        System.out.println(g[1].toString());
    }
    
}
