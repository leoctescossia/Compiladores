enum Direcao {
    case norte
    case sul
    case leste
    case oeste
}

var minhaDirecao = Direcao.norte

var variavelGenerica: Any = 42
variavelGenerica = "Agora sou uma string"
variavelGenerica = true

class Pessoa {}
let objeto: AnyObject = Pessoa()

func saudacao(nome: String) -> String {
    return "Olá, \(nome)!"
}


func saudacao(nome: String = "Visitante") -> String {
    return "Olá, \(nome)!"
}

print(saudacao())  
print(saudacao(nome: "Ana"))


func somarNumeros(_ numeros: Int...) -> Int {
    return numeros.reduce(0, +)
}

print(somarNumeros(1, 2, 3))


func dobrarNumero(_ numero: Int) {
    var numero = numero
    numero *= 2
    print(numero)
}

var valor = 5
dobrarNumero(valor)
print(valor)  


func dobrarNumero(_ numero: inout Int) {
    numero *= 2
}

var valor = 5
dobrarNumero(&valor) // Passa a variável por referência
print(valor)   

func somar(a: Int, b: Int) -> Int {
    return a + b
}

var operacao: (Int, Int) -> Int = somar
let resultado = operacao(3, 5)


func imprimirValor(_ valor: Int) {
    print("Inteiro: \(valor)")
}

func imprimirValor(_ valor: String) {
    print("String: \(valor)")
}

imprimirValor(42)     
imprimirValor("Olá!")  


let mensagem = saudacao(nome: "Carlos")

let soma = { (a: Int, b: Int) -> Int in
    return a + b
}

