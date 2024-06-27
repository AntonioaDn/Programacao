const radio_militar = document.querySelector("#r_militar")
const radio_normal = document.querySelector("#r_normal")
const t_blindagem = document.querySelector("#t_blindagem")
const t_municao = document.querySelector("#t_municao")
const t_nome = document.querySelector("#t_nome")
const t_portas = document.querySelector("#t_portas")
const btn_adicionar = document.querySelector("#adicionar")
const carros = document.querySelector("#carros")
let arr_carros = []

radio_militar.addEventListener("click", () => {
    t_blindagem.disabled = false;
    t_municao.disabled = false;
});

radio_normal.addEventListener("click", () => {
    t_blindagem.disabled = true
    t_municao.disabled = true
    t_blindagem.value = 0
    t_municao.value = 0
})

btn_adicionar.addEventListener("click", () => {
    if (radio_militar.cheked) {
        try {
            let c = new Militar(t_nome.value, t_portas.value, t_blindagem.value, t_municao.value)
            let div_carro = document.createElement("div")
            div_carro.classList.add("carro")
            div_carro.innerHTML = c.info()
            carros.appendChild(div_carro)
            arr_carros.push(c)
        } catch (er) {
            alert("Preenhca todos os campos corretamente")
        }
    } else {
        try {
            let c = new Carro(t_nome.value, t_portas.value)
            let div_carro = document.createElement("div")
            div_carro.classList.add("carro")
            div_carro.innerHTML = c.info()
            carros.appendChild(div_carro)
            arr_carros.push(c)
        } catch (error) {
            alert("Preenhca todos os campos corretamente")
            
        }
    }
})

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
    info() {
        return `Nome: ${this.nome}<br>Portas: ${this.portas}<br>Ligado: ${(this.ligado) ? "sim" : "não"}<br>Velocidade: ${this.vel}
        <br>Cor: ${(this.cor)==undefined? "cor de fábrica" : `${this.cor}`}`
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
