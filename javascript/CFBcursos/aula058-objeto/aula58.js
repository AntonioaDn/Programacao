class Carro {
    constructor(pnome, ptipo) {
        this.nome = pnome

        if (ptipo == 1) {
            this.tipo = "Esportivo"
            this.velmax = 250
        } else if (ptipo == 2) {
            this.tipo = "Conversivel"
            this.velmax = 300
        } else if (ptipo == 3) {
            this.tipo = "Utilitario"
            this.velmax = 120
        } else {
            this.tipo = "Militar"
            this.velmax = 160
        }
    }
    
    info () {
        console.log("----------------")
        console.log(`Nome.: ${this.nome}`)
        console.log(`Tipo.: ${this.tipo}`)
        console.log(`V.Max: ${this.velmax}`)
        console.log("----------------")
    }
}

const c1 = new Carro("Camaro", 1)
const c2 = new Carro("Toro", 3)
const c3 = new Carro("Agrale Marruá", 4)
const c4 = new Carro("Porsche 911", 2)

c1.info()
console.log("----------------")
c2.info()
console.log("----------------")
c3.info()
console.log("----------------")
c4.info()