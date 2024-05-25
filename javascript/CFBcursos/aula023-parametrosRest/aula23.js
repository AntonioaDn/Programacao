// Parametro rest serve para criar uma funcao que pode
// receber um numero variavel de parametros
function soma (...valores) {
    let soma = 0
    for (let o of valores) {
        soma += o
    }
    return soma
}

console.log(soma(1, 3, 22, 22, 1))