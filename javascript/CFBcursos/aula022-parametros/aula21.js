// Em javascript eh possivel alterar o valor de uma variavel atraves de funcoes
// mesmo que essa variavel esteja fora da funcao:

let valor = 0
console.log(valor)
function add (n1) {
    valor += n1
}
add(5)
console.log(valor)
add(10)
console.log(valor)
let traco = "-----------------------"
console.log(traco)


function imprime(p1) {
    console.log(p1)
}

let n = 10
let s = "Ai ze da manga"
let f = false

imprime(n)
imprime(s)
imprime(f)
console.log(traco)

function soma (n1, n2) {
    let res = n1 + n2
    return res
}
// Usando valores padroes:
function exibeSoma(n1=0, n2=0) {
    console.log(n1 + n2)
}

console.log(soma(n, s))
console.log(soma(s, f))
console.log(soma(f, n))
console.log(traco)
exibeSoma(n, s)
exibeSoma(s, f)
exibeSoma(f, n)
console.log(traco)

exibeSoma("Banana")
console.log(traco)