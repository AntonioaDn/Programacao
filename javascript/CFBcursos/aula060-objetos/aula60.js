function Pessoa(pnome, pidade) {
    this.nome = pnome,
    this.idade = pidade,

    this.getNome=function() {
        return this.nome
    },

    this.getIdade=function() {
        return this.idade
    },

    this.setNome= function(nome) {
        this.nome = nome
    },

    this.setIdade= function(idade) {
        this.idade = idade
    },

    this.info= function() {
        return "Nome: " + this.getNome() + "<br>\nIdade: " + this.getIdade()
    }
    
}

const f_nome = document.querySelector("#f_nome")
const f_idade = document.querySelector("#f_idade")
const btn = document.querySelector("#btn_add")
const div_res = document.querySelector("#div_res")
const pessoas = []

const addPessoa = () => {
    div_res.innerHTML = ""
    pessoas.map((p) => {
        const div = document.createElement("div")
        div.setAttribute("class", "pessoa")
        div.innerHTML = `Nome: ${p.getNome()}<br>Idade: ${p.getIdade()}`
        div_res.appendChild(div)
    })
}

btn.addEventListener("click", () => {
    try {
        if (f_idade == "" || f_nome =="") {
            alert("Preenhca os campos corretamente")
        } else {
            let nome = f_nome.value
            let idade = Number(f_idade.value)
            let pessoa = new Pessoa(nome, idade)
            pessoas.push(pessoa)
            f_idade.value = ""
            f_nome.value = ""
            addPessoa()
        }
    } catch (error) {
        alert("Preencha os campos corretamente")
    }
})

console.log(pessoas)