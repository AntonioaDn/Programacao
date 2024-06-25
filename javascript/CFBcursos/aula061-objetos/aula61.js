const Pessoa = {
    nome:'',
    idade:0,
    getNome: function() {
        return this.nome
    },
    getIdade: function() {
        return this.idade
    },
    setNome: function (nome) {
        this.nome = nome
    },
    setIdade: function (idade) {
        this.idade = idade
    }
}

const f_nome = document.querySelector("#f_nome")
const f_idade = document.querySelector("#f_idade")
const btn = document.querySelector("#btn_add")
const div_res = document.querySelector("#div_res")

btn.addEventListener("click", () => {
    if (f_nome != "" && f_idade != ""){
        
    } else {
        alert("Preencha os campos corretamente.")
    }
})