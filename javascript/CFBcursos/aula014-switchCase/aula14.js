let opcao = 3

switch(opcao) {
    case 1: 
        console.log("Primeira instrucao")
        break
    case 2:
        console.log("Segunda opcao")   
        break
    case 3: case 4: case 5:
        console.log("Opcao esta entre 3 e 5")
    default:
        console.log("Opcao nao disponivel")
        break
}
