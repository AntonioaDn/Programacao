const input_nome = document.querySelector("#input_nome")
const input_portas = document.querySelector("#input_portas")
const input_blindagem = document.querySelector("#input_blindagem")
const input_municao = document.querySelector("#input_municao")
const radio_militar = document.querySelector("#radio_militar")
const radio_normal = document.querySelector("#radio_normal")
const btn_adicionar = document.querySelector("#btn_adicionar")
const carros = document.querySelector("#carros")
const arr_carros = []

radio_militar.addEventListener("click", () => {
    input_blindagem.disabled = false
    input_municao.disabled = false
})

radio_normal.addEventListener("click", () => {
    input_blindagem.disabled = true
    input_municao.disabled = true
    input_blindagem.value = 0
    input_municao.value = 0
})

btn_adicionar.addEventListener("click", () => {
    try {
        let nome = input_nome.value
        let portas = input_portas.value
        let blindagem = input_blindagem.value
        let municao = input_municao.value
        let div_carro = document.createElement("div")
        div_carro.setAttribute("class", "carro")
        let btn_remover = document.createElement("button")
        btn_remover.innerHTML = "remover"
        if (radio_militar.checked) {
            let carro_militar = new Militar(nome, portas, blindagem, municao)
            div_carro.innerHTML = carro_militar.info()
            carros.appendChild(div_carro)
            arr_carros.push(carro_militar)
        } else {
            let carro_normal = new Carro(nome, portas)
            div_carro.innerHTML = carro_normal.info()
            carros.appendChild(div_carro)
            arr_carros.push(carro_normal)
        }
        btn_remover.addEventListener("click", (evt) => {
            carros.removeChild(evt.target.parentNode)
            // Continuar daqui.
        })
        div_carro.appendChild(btn_remover)
        console.log(arr_carros)

    } catch (error) {
        
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
