// Fazer um programa que le tres numeros e mostra em ordem crescente

let n1 = prompt("Digite o primeiro valor: ")
let n2 = prompt("Digite o segundo valor: ")
let n3 = prompt("Digite o terceiro valor: ")

n1 = parseInt(n1)
n2 = parseInt(n2)
n3 = parseInt(n3)

let primeiro = (n1 >= n2 && n1 >= n3) ? n1 : ((n2 >= n3 && n2 >= n1) ? n2 : n3)