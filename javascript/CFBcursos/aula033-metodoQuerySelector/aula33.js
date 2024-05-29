const div_todas = [...document.getElementsByTagName("div")]
const times_todos = [...document.getElementsByClassName("times")]
const times_serieA = [...document.getElementsByClassName("serieA")]
const times_serieB = [...document.getElementsByClassName("serieB")]
const time_especial = document.getElementById("d1")

// O comando queryselector ira selecionar apenas a primeira ocorrencia 
// ja o querySelectorAll ira retornar todos
// Para retornar o elemento a partir de uma tag basta passsar como 
// parametro o nome da tag -> linha 17
// Para retornar o elemento a partir de uma classe, passar como parametro 
// um ponto e nome da classe da seguinte forma ".classe" -> linha 18
// Para retornar o elemento a partir de um id, passar como parametro 
// um # e o nome da classe da seguinte forma: "#id" -> linha 21

// Pegando tag:
const query_div = document.querySelector("div")
// Pegando tag:
const query_div_todas = [...document.querySelectorAll("div")]
// Pegando classe:
const query_times_todos = [...document.querySelectorAll(".times")]
// Pegando classe:
const query_times_serieA = [...document.querySelectorAll(".serieA")]
// Pegando classe:
const query_times_serieB = [...document.querySelectorAll(".serieB")]
// Pegando id:
const query_time_especial = document.querySelector("#d1")
// Maneira de pegar apenas as divs que possuem o atributo class
const query_classes = [...document.querySelectorAll("div[class]")]
// Forma de pegar as divs que possuem um elemento com a tag <p>:
// Todos os elementos p que tem como parent uma div
const query_tag_p = [...document.querySelectorAll("div > p")]


console.log(query_tag_p)
console.log(query_classes)
console.log(query_time_especial)
// console.log(query_times_todos)
// console.log(query_div_todas)
// console.log(div_todas)
// console.log(times_todos)
// console.log(times_serieA)
// console.log(times_serieB)
// console.log(time_especial)

times_serieA.map((e) => {
    e.classList.add("destaque")
})