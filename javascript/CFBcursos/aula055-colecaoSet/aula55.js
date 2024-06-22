// A coleção set não permite valores repetidos

const caixa = document.querySelector(".caixa")

// É possível inicializar um Set já com elementos
let set = new Set(["musica 1", "musica 2", "musica 3"])

console.log(set)

set.add("musica 4")
set.add("musica 1")
set.add("musica 2")
set.add("musica 3")
set.add("musica 5")

set.delete("musica 1")

set.forEach((el) => {
    caixa.innerHTML += el + "<br/>"
})