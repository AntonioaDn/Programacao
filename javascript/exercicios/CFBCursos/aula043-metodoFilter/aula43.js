const caixaCursos = document.querySelector("#caixaCursos")
const btn_c = [...document.querySelectorAll(".curso")]
const c1_2 = document.querySelector("#c1_2")
const cursos = ["HTML", "CSS", "Javascript", "PHP", "React", "MySql", "Angular JS"]
const btnCursoSelecionado = document.querySelector("#btnCursoSelecionado")

cursos.map((el, i) => {
    const novoElemento = document.createElement("div")
    novoElemento.setAttribute("id", "c" + i)
    novoElemento.setAttribute("class", "curso c1")
    novoElemento.innerHTML = el

    const comandos = document.createElement("div")
    comandos.setAttribute("class", "comandos")

    const rb = document.createElement("input")
    rb.setAttribute("type", "radio")
    rb.setAttribute("name", "rb_curso")

    comandos.appendChild(rb)

    novoElemento.appendChild(comandos)

    caixaCursos.appendChild(novoElemento)


})

btnCursoSelecionado.addEventListener("click", () => {
    const todosRadios = [...document.querySelectorAll("input[type=radio]")]
    let radioSelecionado = todosRadios.filter((el, i, arr) => {
        return el.checked
    })
    radioSelecionado = radioSelecionado[0]

    const cursoSelecionado = radioSelecionado.parentNode.parentNode.firstChild.textContent
    // const cursoSelecionado = radioSelecionado.parentNode.previousSibling.textContent
    alert("Curso selecionado: " + cursoSelecionado)
})

