// Serve para especificar um elemento que vai disparar um evento
// Por exemplo, se eu adiciono um evento a uma div, que possui filhas dentro dela
// eu posso fazer com que apenas a mãe acione o evento e as filhas nao
// pois, por padrao as filhas tambem iriam acionar.

const caixa1 = document.querySelector("#caixa1")
const divs_caixa1 = [...caixa1.children]

caixa1.addEventListener("click", () => {
    console.log("clicou")
    caixa1.classList.toggle("selecionado")
})

divs_caixa1.map((el) => {
    el.addEventListener("click", (evt) => {
        evt.stopPropagation()
    })
})