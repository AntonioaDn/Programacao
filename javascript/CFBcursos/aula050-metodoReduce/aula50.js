const p_array = document.querySelector("#p_array")
const btn_reduce = document.querySelector("#reduce-btn")
const p_resultado = document.querySelector("#p_resultado")

const elementos_array = [1, 2, 3, 4, 5]
let aux = []
p_array.innerHTML = "[ " + elementos_array + " ]" 



btn_reduce.addEventListener("click", () => {
    const ret = elementos_array.reduce((accumulator, element, index, array) => {
        return accumulator + element
    })

    p_resultado.innerHTML = "O valor da soma dos elementos é: " + ret
})