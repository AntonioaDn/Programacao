/*

Operador relacional "==": 
Compara o valor da variavel, por exemplo:
let num1 = 1
let num2 = "1"
console.log(num1 == num2) -> Retornara verdadeiro no console

Operador "===":
Compara ate o tipo de dados, por exemplo:

console.log(num1 === num2)

*/

// Local para testes:
// let num1 = 1
// let num2 = "1"
// console.log(num1 == num2) 
// console.log(num1 === num2)

// Exemplo com objetos:
// let pessoa1={nome: "Antonio"}
// let pessoa2={nome: "Antonio"}
// console.log(pessoa1 === pessoa2)
// Tambem retornara falso pois o operador === tambem leva em 
// consideracao o endereco de memoria do objeto

// A nao ser que seja feito algo do tipo:
// let pessoa2 = pessoa1
// console.log(pessoa1 === pessoa2)

// ENTRADA DE DADOS PELO PROMPT:
let nome = prompt("Digite seu nome:")
console.log(nome)
