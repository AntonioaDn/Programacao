// A caixa1 eh a parent de todas as divs que estao dentro delas, ela possui childs
// em especial a first child e last child, ja as divs sao siblings entre si 

const caixa1 = document.querySelector("#caixa1")
const btn_c = [...document.querySelectorAll(".curso")]

// Primeiro filho
console.log(caixa1.firstElementChild)
// Ultimo filho
console.log(caixa1.lastElementChild)
// Todos os elementos
console.log(caixa1.children)

// Raiz de todos os elementos do documento:
console.log(document.getRootNode())

// Proprietario do primeiro elemento do array de divs:
console.log(btn_c[0].ownerDocument)