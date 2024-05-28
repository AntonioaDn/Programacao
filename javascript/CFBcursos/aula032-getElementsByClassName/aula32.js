const times_todos = [...document.getElementsByClassName("times")]
const times_serieA = [...document.getElementsByClassName("serieA")]
const times_serieB = [...document.getElementsByClassName("serieB")]
const time_especial = document.getElementsByClassName("times")[0]

console.log(times_todos)
console.log(times_serieA)
console.log(times_serieB)
console.log(time_especial)

times_serieA.map((e) => {
    e.classList.add("destaque")
})