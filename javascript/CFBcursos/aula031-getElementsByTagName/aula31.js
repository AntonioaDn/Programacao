const colecaoHTML = [...document.getElementsByTagName("div")]
const textos = [...document.getElementsByTagName("div")]
textos.map((e) => {
    e = e.innerHTML
})

console.log(colecaoHTML)
console.log(textos)

function mudarTexto() {
    colecaoHTML.map((e)=>{
        console.log(e.innerHTML)
        e.innerHTML = "Texto mudado com sucesso"
        console.log(e.innerHTML)
    })    
}
