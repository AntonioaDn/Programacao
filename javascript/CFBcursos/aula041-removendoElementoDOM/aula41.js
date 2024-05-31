const caixa1 = document.querySelector("#caixa1")
const btn_c = [...document.querySelectorAll(".curso")]
const cursos = ["HTML", "CSS", "Javascript", "PHP", "React", "MySql", "Angular JS"]

cursos.map((el, i) => {
    const novoElemento = document.createElement("div")
    novoElemento.innerHTML = el
    novoElemento.setAttribute("id", "c" + (i+1).toString)
    novoElemento.setAttribute("class", "curso c1")

    const btn_lixeira = document.createElement("img")
    btn_lixeira.setAttribute("src", "./img-lixeira.png")
    btn_lixeira.setAttribute("class", "btn_lixeira")
    novoElemento.appendChild(btn_lixeira)
    
    btn_lixeira.addEventListener("click", () => {
        caixa1.removeChild(novoElemento)
    })
    caixa1.appendChild(novoElemento)
    
})
