// A estrutura map relaciona um valor com um objeto, os dois são definidos pelo programador, 
// não necessariamente seguinte uma ordem

const caixa = document.querySelector(".caixa")

let mapa = new Map()

mapa.set("curso", "Javascript")
mapa.set(10, "CFB Cursos")
mapa.set(1, 100)
mapa.set(10, "CFB Cursos")
mapa.set("canal", 100)


console.log(mapa)

if (mapa.has("canal")) {
    caixa.innerHTML = "A chave existe"
} else {
    caixa.innerHTML = "A chave não existe existe"
}

caixa.innerHTML += ". O tamanho da coleção é: " + mapa.size

// caixa.innerHTML = mapa.get("curso")