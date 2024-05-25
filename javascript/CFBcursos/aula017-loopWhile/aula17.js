// O loop for e da seguinte forma :
// while (n < 10) {
//      console.log(n)
//      n++
// }

// Criando um loop para fatoriais: 
let n = 6
let fat = 1
while (n > 1) {
    fat *= n
    n--
}
console.log("O fatorial de " + 6 + " eh " + fat)
