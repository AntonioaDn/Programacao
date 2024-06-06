const caixaCursos = document.querySelector("#caixaCursos")
const btn_c = [...document.querySelectorAll(".curso")]
const c1_2 = document.querySelector("#c1_2")
const cursos = ["HTML", "CSS", "Javascript", "PHP", "React", "MySql", "Angular JS"]
const btnCursoSelecionado = document.querySelector("#btnCursoSelecionado")
const btnRemoverCurso = document.querySelector("#btnRemoverCurso")
const btnAdicionarAntes = document.querySelector("#btnAdicionarAntes")
const btnAdicionarDepois = document.querySelector("#btnAdicionarDepois")
const nomeCurso = document.querySelector("#nomeCurso")

let indice = 0

// Aqui comeca a logica


// Funcao para criar um novo curso: 

const criarCurso = (curso) => {
    // ne = Novo elemento HTML
    const ne = document.createElement("div")
    ne.setAttribute("id", "c" + indice)
    ne.setAttribute("class", "curso c1")
    ne.innerHTML = curso

    const comandos = document.createElement("div")
    comandos.setAttribute("id", "comandos")
    comandos.setAttribute("class", "comandos")

    const rb = document.createElement("input")
    rb.setAttribute("type", "radio")
    rb.setAttribute("name", "rb_cursos")
    comandos.appendChild(rb)

    ne.appendChild(comandos)

    return ne
    
    
}

// Funcao para preencher a caixa de cursos:
cursos.map((el, i) => {
    const ne = criarCurso(el)
    caixaCursos.appendChild(ne)
    indice++
})


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

// Adicionar evento ao botao adicionar curso antes:
btnAdicionarAntes.addEventListener("click", () => {
    const rs = radioSelecionado()
    try {
        if (nomeCurso.value != ""){
            const cursoSelecionado = rs.parentNode.parentNode
            const novoCurso = criarCurso(nomeCurso.value)
            caixaCursos.insertBefore(novoCurso, cursoSelecionado)
        } else {
            alert("Digite o nome do curso.")
        }
    } catch (ex) {
        alert("Selecione algum curso")
    }
})

// Adicionar evento ao botao adicionar depois:
btnAdicionarDepois.addEventListener("click", () => {
    const rs = radioSelecionado() 
    try {
        if (nomeCurso.value != ""){
            const novoCurso = criarCurso(nomeCurso.value)
            const cursoSelecionado = rs.parentNode.parentNode
            caixaCursos.insertBefore(novoCurso, cursoSelecionado.nextSibling)
        } else {
            alert("Digite o nome do curso.")
        }
    } catch (error) {
        
    }
    
})