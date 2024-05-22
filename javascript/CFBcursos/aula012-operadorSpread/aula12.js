// // O operador spread eh o "..."
// let n1 =[10, 20, 30]
// let n2 = [11, 22, 33, 44, 55]
// // Se eu quiser concatenar n1 e n2 e colocar em n3 eu devo fazer o seguinte: 
// let n3 = [n1, n2]

// console.log("n1: " + n1)
// console.log("n2: " + n2)
// console.log("n3: " + n3)

// // Eh possivel espalhar objetos usando o spread, por exemplo:
// const jogador1 = {Nome: "Antonio", Energia: 100, vidas: 3, magia:15, mana:22}
// const jogador2 = {Nome: "Pedro", Energia: 120, vidas: 5, forca:25, atackspeed:22}
// // Eh possivel fazer o seguinte:
// const jogador3 = {...jogador1, ...jogador2}
// console.log(jogador3)

// // Operador spread tambem eh util para somas:
// const soma=(v1, v2, v3)=>{
//     return v1 + v2 + v3
// }

// let valores = [1, 5, 4]

// console.log(valores)

// Usando no HTML:
const objs1 = document.getElementsByTagName("div")
const objs2 = [...document.getElementsByTagName("div")]
console.log(objs1)
console.log(objs2)

objs2.forEach(element => {
    console.log(element)
})