/* 
Escreva um programa que leia tres valores e diga qual o maior entre os tres
e qual o menor
*/

let v1 = prompt("Digite o primeiro valor: ")
let v2 = prompt("Digite o segundo valor: ")
let v3 = prompt("Digite o terceiro valor: ")

if (v1 >= v2 && v1 >= v3) {
    console.log("O maior valor eh " + v1)
} else if (v2 >= v1 && v2 >= v3) {
    console.log("O maior valor eh " + v2) 
} else {
    console.log("O maior valor eh " + v3)
}

if (v1 <= v2 && v1 <= v3) {
    console.log("O menor valor eh " + v1) 
} else if (v1 <= v1 && v2 <= v3) {
    console.log("O menor valor eh " + v2) 
} else {
    console.log("O menor valor eh " + v3) 
}