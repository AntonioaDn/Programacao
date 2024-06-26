class Carro { // Classe PAI
    constructor(nome, portas) {
        this.nome = nome
        this.portas = portas
        this.ligado = false
        this.vel = 0
        this.cor = undefined
    }

    setNome(nome) {
        this.nome = nome
    }
    setPortas(portas) {
        this.portas = portas
    }
    setCor(cor) {
        this.cor = cor
    }
    Ligar() {
        this.ligado = true
    }
    Desligar() {
        this.ligado = false
    }
    setVel(vel) {
        this.vel = vel
    }
    getNome() {
        return this.nome
    }
    getPortas() {
        return this.portas
    }
    getEstado() {
        return this.ligado
    }

}

class Militar extends Carro { // Classe filho
    constructor(nome, portas, blindagem, municao) {
        super(nome, portas)
        this.blindagem = blindagem 
        this.municao = municao
    }

    atirar() {
        if (this.municao > 0) {
            this.municao--
        } else {
            console.log("Sem munição")
        }
    }

    recarregar(quantidade) {
        this.municao += quantidade
    }
}

const c1 = new Carro("Normal")
c1.Ligar()
c1.setCor("Azul")
c1.setPortas(4)
c1.setVel(60)

console.log(`Nome: ${c1.nome}`)
console.log(`Portas: ${c1.portas}`)
console.log(`Ligado: ${c1.getEstado()}`)
console.log(`Velocidade: ${c1.vel}`)
console.log(`Cor: ${c1.cor}`)

