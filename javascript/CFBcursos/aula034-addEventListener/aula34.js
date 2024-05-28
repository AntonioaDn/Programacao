// d1.addEventListener("click", (evt)=>{
//     const el = evt.target
//     el.classList.add("destaque")
// })

const d1 = document.querySelector("#d1")

const msg = () => {
    alert("Clicou")
}


const divs = [...document.querySelectorAll("div")]
divs.map((el) => {
    el.addEventListener("click", (evt) => {
        const div = evt.target
        div.classList.add("destaque")
    })
})