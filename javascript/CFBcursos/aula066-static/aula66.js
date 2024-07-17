class Npc {
    static alerta = false
    constructor(energia) {
        this.energia = energia
        // this.alerta = false
    }
    info = function() {
        console.log("--------------------------")
        console.log(`Energia: ${this.energia}`)
        console.log(`Alerta: ${(Npc.alerta) ? "Está alerta" : "Não está alerta"}`)
        console.log("--------------------------")
    }

    static alertar = function() {
        Npc.alerta = true
    }
    
}

Npc.alertar()

const npc1 = new Npc(100)
const npc2 = new Npc(30)
const npc3 = new Npc(80)

// console.log(npc1.energia)
// console.log(npc2.energia)
// console.log(npc3.energia)

// npc1.alerta = true

npc1.info()
npc2.info()
npc3.info()