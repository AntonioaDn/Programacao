const caixa1 = document.querySelector("#caixa1")
const btn_c = [...document.querySelectorAll(".curso")]
const cursos = ["HTML", "CSS", "Javascript", "PHP", "React", "MySql", "Angular JS"]

cursos.map((el, i) => {
    const novoElemento = document.createElement("div")
    novoElemento.innerHTML = el
    novoElemento.setAttribute("id", "c" + (i+1).toString)
    novoElemento.setAttribute("class", "curso c1")
    caixa1.appendChild(novoElemento)
    
})

// novoElemento.innerHTML = "AngularJS"
// novoElemento.classList.add("curso")
// novoElemento.classList.add("c1")