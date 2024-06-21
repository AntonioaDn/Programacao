let cursos = ["HTML", "CSS", "Javascript"]

const caixa_div = document.querySelector("#caixa")

// Para adicionar elementos ao final de um array em JS, basta usar a metodo push:

cursos.push("C++")
cursos.push("Python")
cursos.push("Java")

// Para retirar o ultimo elemento do array basta usar o metodo pop():

cursos.pop()
cursos.pop()

// Para adicionar elementos no começo de um array em JS, basta usar a metodo unshift:

cursos.unshift("Ruby")

// Para retirar o primeiro elemento do array basta usar o metodo shift:

cursos.shift()

cursos.map((el, i) => {
    let p = document.createElement("p")
    p.innerHTML = el
    caixa_div.appendChild(p)
})

let cores = ["azul", "verde", "vermelho"]
cursos.push(cores)
alert(cursos[4][1])