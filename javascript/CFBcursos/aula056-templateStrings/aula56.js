const caixa = document.querySelector(".caixa")

// const curso = "Javascript"
// const canal = "CFB Cursos"

// const frase = `Este é o <br/>curso de ${curso} <br/>do canal ${canal}.`

// // const frase = "Este é o curso de " + curso + " do canal " + canal

// caixa.innerHTML = frase

let carros = ["HB-20", "Gulf", "Pulo", "Gul", "Celta"]
let ul = `<ul/>`
carros.map((el) => {
    ul += `<li> ${el}`
})
ul += `<ul/>`

caixa.innerHTML = ul