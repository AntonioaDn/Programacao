const caixa1 = document.querySelector("#caixa1")
const caixa2 = document.querySelector("#caixa2")
const button1 = document.querySelector("#button1")

// Obtendo todas as divs com textos:
const todos_elementos = [...document.querySelectorAll(".curso")]
// Adicionando a possibilidade de selecionar cada div:
todos_elementos.map((el, i) => {
    el.addEventListener("click", (evt) => {
        const div = evt.target
        div.classList.toggle("selecionado")
    })
})

button1.addEventListener("click", (evt) => {
    const selecionados = [...document.querySelectorAll(".selecionado")]
    selecionados.map((el) => {
        caixa2.appendChild(el)
    })
})
