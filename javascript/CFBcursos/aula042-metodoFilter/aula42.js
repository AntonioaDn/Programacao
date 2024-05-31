// const filtroMaior18 = (valor, indice, arr) => {
const filtroMaior18 = (valor) => {
    if (valor >= 18) {
        return valor
    }
}

// function filtroMaior18() {

// }


const idades = [54, 19, 10, 43, 20, 17, 18, 16]
// const maior18 = idades.filter(filtroMaior18)
// ou
const maior18 = idades.filter((valor) => {
    if (valor >= 18) {
        return valor
    }
})
const menor18 = idades.filter((elemento) => {
    if (elemento < 18) {
        return elemento
    }
})
console.log(idades)
console.log(maior18)
console.log(menor18)