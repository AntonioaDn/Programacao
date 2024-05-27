let contador = 0

let divs = []
for (let i=0; i < 5; i++) {
    divs[i] = document.getElementById("d" + (i+1))
}

for (let i=0; i < 5; i++) {
    console.log(divs[i])
    console.log(divs[i].id)
    console.log(divs[i].innerHTML)
}

function mudarTexto(v1 = contador) {

    let t1, t2, t3
    t1 = "Cursando javascript"
    t2 = "Flamengo > vasco"
    t3 = "Windows > Linux"

    // for (e of divs) {
    //     if (v1 % 3 == 0) {
    //         e.innerHTML = t1
    //     } else if (v1 % 3 == 1) {
    //         e.innerHTML = t2
    //     } else {
    //         e.innerHTML = t3
    //     }
    // }

    divs.map((e) => {
        {
            if (v1 % 3 == 0) {
                e.innerHTML = t1
            } else if (v1 % 3 == 1) {
                e.innerHTML = t2
            } else {
                e.innerHTML = t3
            }
        }
    })

    contador++
    
}