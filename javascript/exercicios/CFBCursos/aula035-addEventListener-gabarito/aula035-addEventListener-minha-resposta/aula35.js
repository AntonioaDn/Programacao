const retangulos_verticais = [...document.querySelectorAll(".retangulo_vertical")]

console.log(retangulos_verticais)

function copiar () {
    const times = [...retangulos_verticais[0].getElementsByTagName("div")]
    const times2 = []
    times.map((el, i)=> {
        times2[i] = el.cloneNode(true)
        retangulos_verticais[1].appendChild(times2[i])
    })
}