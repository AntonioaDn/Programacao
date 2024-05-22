/* 
Faca um programa que le tres valores e escrever a soma dos dois maiores
Considerar que o usuario não irá digitar valores iguais
*/

let n1 = prompt("Digite o primeiro valor: ")
let n2 = prompt("Digite o segundo valor: ")
let n3 = prompt("Digite o terceiro valor: ")

n1 = parseInt(n1)
n2 = parseInt(n2)
n3 = parseInt(n3)

let maior1 = (n1 > n2) ? n1 : n2
let maior2 = (n2 > n3) ? n2 : n3

let soma = maior1 + maior2
console.log("A soma dos dois maiores numeros eh: " + soma)
