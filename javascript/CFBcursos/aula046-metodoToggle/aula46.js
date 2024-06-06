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
    // Adiciona um evento ao clicar nas divs de cursos
    ne.addEventListener("click", (evt) => {
        tiraSelecioando()
        evt.target.classList.toggle("selecionado")
    })
    ne.innerHTML = curso

    return ne
        
}

const divSelecionado = () => {
    const todasDivs = [...document.querySelectorAll(".curso")]
    const selecionado = todasDivs.filter((el, i) => {
        if (el.classList.contains("selecionado")){
            return el
        }
    })

    return selecionado[0]

}

// Funcao para retirar a classe selecionado das outras divs:
const tiraSelecioando = () => {
    const todasDivs = [...document.querySelectorAll(".selecionado")]
    todasDivs.map((el) => {
        el.classList.remove("selecionado")
    })
}

// Funcao para preencher a caixa de cursos:
cursos.map((el, i) => {
    const ne = criarCurso(el)
    caixaCursos.appendChild(ne)
    indice++
})

// Adicionar evento ao botao selecionado

btnCursoSelecionado.addEventListener("click", (evt) => {
    const rs = divSelecionado()
    console.log(rs)
    try {
        alert("Curso selecionado: "  + rs.textContent)
    } catch (ex) {
        alert("Selecione algum curso")
    }
    
})


// Adicionar evento ao botao remover curso 

btnRemoverCurso.addEventListener("click", (evt) => {
    const rs = divSelecionado() 
    try {
        rs.remove()
    } catch (ex) {
        alert("Selecione algum curso")
    }
    
})

// Adicionar evento ao botao adicionar curso antes:
btnAdicionarAntes.addEventListener("click", () => {
    const rs = divSelecionado()
    try {
        if (nomeCurso.value != ""){
            const novoCurso = criarCurso(nomeCurso.value)
            caixaCursos.insertBefore(novoCurso, rs)
            indice++
        } else {
            alert("Digite o nome do curso.")
        }
    } catch (ex) {
        alert("Selecione algum curso")
    }
})

// Adicionar evento ao botao adicionar depois:
btnAdicionarDepois.addEventListener("click", () => {
    const rs = divSelecionado() 
    try {
        if (nomeCurso.value != ""){
            const novoCurso = criarCurso(nomeCurso.value)
            caixaCursos.insertBefore(novoCurso, rs.nextSibling)
            indice++
        } else {
            alert("Digite o nome do curso.")
        }
    } catch (error) {
        
    }
    
})