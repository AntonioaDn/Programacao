// && and e
// || or ou
// ! not nao

let n1, n2, n3, n4

n1 = 10
n2 = 5
n3 = 15
n4 = 2

console.log("N1 eh maior que n2: " + (n1 > n2))
console.log("N3 eh menor que n4: " + (n3 < n4))
console.log("N1 eh maior que n2 e n3: " + ((n1 > n2) && (n1 > n3)))
console.log("N1 eh menor que n2 ou n3 eh maior que n4: " + ((n1 < n2) || (n3 > n4)))
console.log("N1 nao eh menor que n2: " + (!(n1 < n2)))
