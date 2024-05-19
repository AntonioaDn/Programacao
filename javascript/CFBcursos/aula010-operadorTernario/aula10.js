// let num = 10

// let res = num%2

// // Jeito normal de se fazer:
// if (res == 1) {
//     console.log("O numero eh impar")
// } else {
//     console.log("O numero eh par")
// }

// // Usando operador ternario:
// // Teste logico ? se verdadeiro : se falso

let num = 10
let res
res = (!(num%2) ? "Par" : "Impar") // Caso a operacao resulte em 0 (falso) a segunda opcao sera atribuida
// // caso a operacao resulte em 1 (verdadeiro) a primeira opcao sera atribuida

console.log(res)
