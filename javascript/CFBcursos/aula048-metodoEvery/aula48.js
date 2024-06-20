const p_array = document.querySelector("#p_array")
const btn_verificar = document.querySelector("#verificar-btn")
const p_resultado = document.querySelector("#p_resultado")

const elementos_array = [18, 20, 22, 18, 35, 18, 63, 93, 73, 96, 19]
p_array.innerHTML = "[ " + elementos_array + " ]" 



btn_verificar.addEventListener("click", () => {
    
    const ret = elementos_array.every((el, i) => {
        if (el < 18) {
            p_resultado.innerHTML = "Resultado não conforme na posicao " + i
        }
        return el >= 18
    })

    if (ret) {
        p_resultado.innerHTML = "OK!"
    }
})