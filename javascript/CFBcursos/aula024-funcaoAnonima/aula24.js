// // Funcoes anonimas sao declaradas mas nao sao instanciadas, ela so passa a 
// // ocupar espaco na memoria quando ela eh chamada na execucao
// // nao precisam ter um nome

const f = function(...valores){
    let soma=0
    for (o of valores) {
        soma += o
    }
    return soma
}

// f(10, 5)

// console.log(f)

console.log(f(10, 5, 5, 10, 10))

// Usando o conceito de funcao construtor:
const f1 = new Function("v1", "v2", "return v1+v2")
console.log(f1(10, 5))
