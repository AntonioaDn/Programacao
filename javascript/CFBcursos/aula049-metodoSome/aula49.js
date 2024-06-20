const p_array = document.querySelector("#p_array")
const btn_verificar = document.querySelector("#verificar-btn")
const p_resultado = document.querySelector("#p_resultado")

const elementos_array = [11, 9, 12, 13, 5, 10, 10, 18]
p_array.innerHTML = "[ " + elementos_array + " ]" 



btn_verificar.addEventListener("click", () => {
    p_resultado.innerHTML = "O array não está em conformidade!"
    
    const ret = elementos_array.some((el, i) => {
        return el >= 18
    })

    if (ret) {
        p_resultado.innerHTML = "OK!"
    }
})