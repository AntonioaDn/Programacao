let divs = []
for (let i=0; i < 5; i++) {
    divs[i] = document.getElementById("d" + (i+1))
}
for (let i=0; i < 5; i++) {
    console.log(divs[i])
    console.log(divs[i].id)
    console.log(divs[i].innerHTML)
}
