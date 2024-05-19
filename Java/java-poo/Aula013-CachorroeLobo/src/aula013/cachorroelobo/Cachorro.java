package aula013.cachorroelobo;

public class Cachorro extends Lobo{
    @Override
    public void emitirSom() {
        System.out.println("Au!Au!Au!");
    }

    public void reagir(String frase) {
        if (frase.equals("pacifico")) {
            System.out.println("Abanar e latir");
        } else {
            System.out.println("Latir");
        }
    }

    public void reagir(int idade, float peso) {
        if (idade < 5) {
            if (peso < 10) {
                System.out.println("Abanar");
            } else {
                System.out.println("Latir");
            }
        } else {
            if (idade < 5) {
                if (peso < 10) {
                    System.out.println("Rosnar");
                } else {
                    System.out.println("Ignorar");
                }
            } else {
        
            }
            
        }
    } 
    
    public void reagir(int horas, int minutos) {
        if (horas < 12) {
            System.out.println("Abanar o rabo");
        } else if (horas >= 18) {
            System.out.println("Ignorar");
        }
    }

    public void reagir(boolean dono) {
        if (dono) {
            System.out.println("Abanar o rabo");
        } else {
            System.out.println("Rosnar e latir");
        }
    }
}