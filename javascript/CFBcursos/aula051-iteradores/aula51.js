/*
Elementos iteraveis: Array, String, Map, Set
*/

const valores = [0, 7, 24, 8]
const it_valores = valores[Symbol.iterator]()

const texto = "Youtube"
const it_texto = texto[Symbol.iterator]()

console.log(valores)
console.log(it_texto.next())
console.log(it_texto.next())
console.log(it_texto.next())
console.log(it_texto.next())
console.log(it_texto.next())