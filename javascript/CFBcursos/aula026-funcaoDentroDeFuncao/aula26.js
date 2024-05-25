// Funcoes dentro de funcoes ou funcoes aninhadas
// Basta declarar e chamar a funcao dentro de outra:

const soma=(...valores)=>{
    const somar=val=>{
        let res=0
        for (v of val) {
            res += v
        }
        return res
    }
    return somar(valores)
}

console.log(soma(1, 1, 1))