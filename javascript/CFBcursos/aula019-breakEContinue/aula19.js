let pares = 0
let n = 1
let max = 100

for (let i = n; i <= max; i++) {
    if (i%2 == 0) {
        pares++
        continue
    }
}

console.log("A quantidade de numeros pares entre " + n + " e " + max + " eh: " + pares)

// Verificando se um numero eh primo:
let teste = 141
let cont = 2
let divisores
while (cont * cont <= teste) {
    if (teste % cont != 0) {
        console.log("O numero nao eh primo.")
        break
    }
}
