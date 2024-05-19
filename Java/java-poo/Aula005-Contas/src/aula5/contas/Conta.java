package aula5.contas;
public class Conta {
    public String numConta;
    protected String tipo;
    private String dono;
    private float saldo;
    private boolean status;//status false = conta fechada; status true = 
    //conta aberta
    
    public void Conta() {
        this.saldo = 0;
        this.status = false;
    }
    
    public void mostrarStatus() {
        /*public String numConta;
        protected String tipo;
        private String dono;
        private float saldo;
        private boolean status;*/
        System.out.println("-----------------------");
        System.out.println("Dono da conta: " + this.getDono());
        System.out.println("Numero da conta: " + this.getNumConta());
        System.out.println("Tipo da conta: " + this.getTipo());
        System.out.println("Saldo da conta: " + this.getSaldo());
        System.out.println("A conta está aberta? " + this.isStatus());
        System.out.println("-----------------------");
    }
    
    public void abrirConta(String t) {
        if (this.status == true) {
            System.out.println("A conta já está aberta.");
        } else {
            if (t == "cc") {
                setTipo(t);
                this.saldo = 50;
                this.status = true;
                System.out.println("A conta corrente foi aberta.");
            } else if (t == "cp"){
                setTipo(t);
                this.status = true;
                this.saldo = 150;
                System.out.println("A conta poupança foi aberta.");
            } else {
                System.out.println("Tipo de conta invalido, os tipos validos sao (cc) e (cp)");
            }
        }
    }
    
    public void fecharConta() {
        if (this.saldo == 0) {
            this.status = false;
            System.out.println("A conta foi fechada.");
        } else if (saldo > 0) {
            System.out.println("Saque o saldo restante antes de fechar a conta.");
        } else {
            System.out.println("Não é possivel fechar a conta em debito.");
        }
    }
    
    public void depositar(float v) {
        if (this.status == false) {
            System.out.println("Abra a conta antes de depositar.");
        } else {
            this.saldo += v;
            System.out.println("O saldo de " + v + " foi depositado com sucesso na conta.");
        }
    }
    
    public void sacar (float v) {
        if (this.status == false) {
            System.out.println("Abra a conta antes de depositar.");
        } else {
            if (getSaldo() >= v) {
                this.saldo -= v;
                System.out.println("O valor de " + v + " foi sacado com sucesso.");
            } else {
                System.out.println("A conta não tem saldo suficiente.");
            }
        }
    }
    
    public void pagarMensal() {
        if (this.status == false) {
            System.out.println("A conta está fechada, portanto não paga mensalidade.");
            return;
        }
        int v;
        if (getTipo() == "cc") {
            this.saldo -= 12;
            System.out.println("Mensalidade paga com sucesso.");
        } else if (getTipo() == "cp") {
            setSaldo(getSaldo() - 20);
            System.out.println("Mensalidade paga com sucesso.");
        } else {
            System.out.println("O tipo da conta não foi identificado.");
        }
    }

    public String getNumConta() {
        return numConta;
    }

    public String getTipo() {
        return tipo;
    }

    public String getDono() {
        return dono;
    }

    public float getSaldo() {
        return saldo;
    }

    public boolean isStatus() {
        return status;
    }

    public void setNumConta(String numConta) {
        this.numConta = numConta;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }
    
    
}
