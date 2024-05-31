// A caixa1 eh a parent de todas as divs que estao dentro delas, ela possui childs
// em especial a first child e last child, ja as divs sao siblings entre si 

const caixa1 = document.querySelector("#caixa1")
const btn_c = [...document.querySelectorAll(".curso")]

// Metodo que retorna um valor booleano se um elemento possui childs:
console.log(caixa1.hasChildNodes())
console.log(btn_c[0].hasChildNodes())

// Existe uma maneira um pouco mais segura de fazer: 
function temFilhos (elemento) {
    return ((elemento.children.lenght > 0) ? "Possui filhos" : "Não possui filhos")
}

// Como pegar o parent de um elemento:
const c1_2 = document.querySelector("#c1_2")
console.log(c1_2.parentElement)
console.log(c1_2.parentElement.parentElement)