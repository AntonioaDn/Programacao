// // Para declarar uma funcao geradora eh necessario usar a palavra function
// // Ela controla o proprio retorno 

// function* cores() {
//     yield 'Vermelho'
//     yield 'Verde' 
//     yield 'Azul'
// }

// let itc=cores()
// console.log(itc.next().value)
// console.log(itc.next().value)
// console.log(itc.next().value)
// console.log(itc.next().value)

// function* perguntas() {
//     const nome = yield 'Qual o seu nome?'
//     const esporte = yield 'Qual seu esporte favorito?'
//     return 'Seu nome eh ' + nome + ' e se esporte favorito eh ' + esporte
// }

// const itp = perguntas()
// console.log(itp.next().value)
// console.log(itp.next('Antonio').value)
// console.log(itp.next('Muay Thai').value)

// Eh possivel fazer uma funcao geradora com loop:

// function* contador() {
//     let i=0
//     while(true) {
//         yield i++
//     }
// }

// const itc = contador() 
// console.log(itc.next().value)
// console.log(itc.next().value)
// console.log(itc.next().value)
// console.log(itc.next().value)
