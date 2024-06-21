const operacoes = [...document.querySelectorAll(".operacao")]
const operadores = [...document.querySelectorAll(".operador")]
const btn_resultado = document.querySelector("#igual")
const lbl_resultado = document.querySelector("#resultado")

let operacao_selecionada = null

operacoes.map((el, i) => {
    el.addEventListener("click", () => {
        operacoes.map((el) => {
            el.classList.remove("selecionado")
        })
        el.classList.toggle("selecionado")
        operacao_selecionada = i
    })
})

const operacao = [
    (num_1, num_2) => {
        lbl_resultado.innerHTML = num_1 + num_2
    }, 
    (num_1, num_2) => {
        lbl_resultado.innerHTML = num_1 - num_2
    },
    (num_1, num_2) => {
        lbl_resultado.innerHTML = num_1 * num_2
    },
    (num_1, num_2) => {
        lbl_resultado.innerHTML = num_1 / num_2
    }

]

btn_resultado.addEventListener("click", (evt) => {
    try {
        let n1 = parseFloat(operadores[0].value)
        let n2 = parseFloat(operadores[1].value)
        operacao[operacao_selecionada](n1, n2)
        lbl_resultado.classList.add("preto")
    } catch (e) {
        alert("Faça apenas operações possíveis.")
    }
})