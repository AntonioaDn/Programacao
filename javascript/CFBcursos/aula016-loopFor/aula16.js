// // For in:
// let num = [10, 20, 30, 40, 50]
// for (n in num) {
//     console.log(num[n])
// }

// // For of:
// let num = [10, 20, 30, 40, 50]
// for (n of num) {
//     console.log(n)
// }

// Uso pratico de for in e for of:
let objs = document.getElementsByTagName("div")
console.log("Comeco do primeiro for.")
for (o of objs) {
    console.log(o)
}

for (p in objs) {
    console.log(p)
}

console.log("Fim do segundo for.")

