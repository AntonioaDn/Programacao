// O metodo find retorna se um elemento esta no array ou nao

// Para essa aula sera necessario manipular o array, input, botao e resultado:
const p_array = document.querySelector("#array")
const txt_pesquisar = document.querySelector("#txt_pesquisar")
const btn_pesquisar = document.querySelector("#btn_pesquisar")
const resultado = document.querySelector("#resultado")

const array = [10, 5, 8, 2, 9, 15, 20]

p_array.innerHTML = "[" + array + "]"

// Funcao para pesquisar ao apertar o botao:
btn_pesquisar.addEventListener("click", () => {
    resultado.innerHTML = "Valor nao encontrado"
    const valor = txt_pesquisar.textContent
    array.find((el, i, arr) => {
        if (valor == el) {
            resultado.innerHTML = "Valor " + e + " encontrado na posicao: " + i
            return e
        }
    })

})

