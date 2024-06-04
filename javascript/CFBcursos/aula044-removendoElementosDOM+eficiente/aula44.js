const caixaCursos = document.querySelector("#caixaCursos")
const btn_c = [...document.querySelectorAll(".curso")]
const c1_2 = document.querySelector("#c1_2")
const cursos = ["HTML", "CSS", "Javascript", "PHP", "React", "MySql", "Angular JS"]
const btnCursoSelecionado = document.querySelector("#btnCursoSelecionado")
const btnRemoverCurso = document.querySelector("#btnRemoverCurso")

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

// Aqui comeca a logica

// Primeiro a funcao de radio selecionado 
const radioSelecionado = () => {

    const todosRadios = [...document.querySelectorAll("input[type=radio]")]
    const radioSel = todosRadios.filter((el, i, arr) => {
        return el.checked
    })
    return radioSel[0]    

}

// Adicionar evento ao botao selecionado

btnCursoSelecionado.addEventListener("click", (evt) => {
    const rs = radioSelecionado()
    try {
        const cursoSelecionado = rs.parentNode.parentNode
        alert("Curso selecionado: "  + cursoSelecionado.textContent)
    } catch (ex) {
        alert("Selecione algum curso")
    }
    
})


// Adicionar evento ao botao remover curso 

btnRemoverCurso.addEventListener("click", (evt) => {
    const rs = radioSelecionado() 
    try {
        const cursoSelecionado = rs.parentNode.parentNode
        cursoSelecionado.remove()
    } catch (ex) {
        alert("Selecione algum curso")
    }
    
})