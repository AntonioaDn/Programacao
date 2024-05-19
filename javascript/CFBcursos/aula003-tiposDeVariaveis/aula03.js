"use strict"

// var nome="Antônio" // Cria uma variável , pode ser acessada mesmo da seguinte forma:
// isso eh um problema desse tipo de variavel

// if (true) {
//     var nome2="Pedro"
// }

// console.log(nome2)

// Porem com uma variavel do tipo let nao eh possivel: 

// function teste() {
//     let nome3="Renata"
//     if (true) {
//         console.log("Dentro do IF da funcao: " + nome3)
//     }
//     console.log("Fora do IF: " + nome3)
// }

// teste()
// console.log(nome3)

// O javascript realiza automaticamente o typecasting de variaveis do tipo let:
// let nome4="Antonio"
// console.log(nome4)
// nome4=10 
// console.log(nome4)

// Constantes: 
const nome5="Javascript"
console.log(nome5)
nome5="Curso"  // Nessa linha ocorrera um erro
console.log(nome5)