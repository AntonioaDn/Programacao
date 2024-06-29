const pessoa = {
    nome: "Antônio",
    github: "AntonioaDn",
    repositorios: {
        rep1: "Programação em C",
        rep2: "Python",
        rep3: "Gerenciador de pizzaria"
    }
}

console.log(pessoa)
console.log(pessoa.github)
console.log(pessoa.repositorios.rep1)

const s_json_pessoa = JSON.stringify(pessoa) // JSON stringfy converte um objeto literal em JSON
const o_json_pessoa = JSON.parse(s_json_pessoa) // JSON pare converte JSON em objeto literal

console.log(s_json_pessoa)