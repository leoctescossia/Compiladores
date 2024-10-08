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


var numero = 42  // Inferência implícita: Int
var texto: String = "Olá, mundo!"  // Declaração explícita

# Formato de Nomes e Convenções de Escrita

var minhaVariavel = "Olá, mundo!"  // CamelCase, recomendado para variáveis
let nomeDoUsuario = "Denis"         // Uso de let para uma constante

# Palavras Reservadas / Palavras-chave da Linguagem
let constante = 10
var variavel = 5

if variavel < constante {
    print("A variável é menor que a constante.")
} else {
    print("A variável é maior ou igual à constante.")
}
## Vinculação de Tipos: Estática ou Dinâmica? Implícita ou Explícita?
#Inferência de Tipos (implícita)
var idade = 30  // Swift infere que "idade" é do tipo Int
var altura: Double = 1.75  // Tipo explicitamente declarado como Double

# Níveis e Modificadores de Escopo

public class Pessoa {
    private var nome: String  // Acesso privado, somente dentro da classe
    
    init(nome: String) {
        self.nome = nome
    }
    
    func getNome() -> String {
        return nome
    }
}

let pessoa = Pessoa(nome: "Ana")
print(pessoa.getNome())  // "Ana"

## Dá Suporte a Ponteiros e Referências?

#Tipos de Valor (copiados)
struct Ponto {
    var x: Int
    var y: Int
}

var ponto1 = Ponto(x: 0, y: 0)
var ponto2 = ponto1
ponto2.x = 10

print(ponto1.x)  // Saída: 0, porque "ponto2" é uma cópia de "ponto1"

#Tipos de Referência (compartilham a mesma instância)

class Retangulo {
    var largura: Double
    var altura: Double
    
    init(largura: Double, altura: Double) {
        self.largura = largura
        self.altura = altura
    }
}

let retangulo1 = Retangulo(largura: 5.0, altura: 10.0)
let retangulo2 = retangulo1  // retangulo2 refere-se à mesma instância de retangulo1
retangulo2.largura = 20.0

print(retangulo1.largura)  // Saída: 20.0, porque ambos compartilham a mesma instância

# Exemplo de constantes e variáveis mutáveis:
1. private
Acesso mais restrito.
Variáveis ou funções declaradas como private só podem ser acessadas dentro da mesma classe, struct ou extensão onde foram definidas.

class Pessoa {
    private var nome: String = "João"
    
    func mostrarNome() -> String {
        return nome  // Acessível dentro da classe
    }
}

let pessoa = Pessoa()
// pessoa.nome  // Erro: "nome" não é acessível fora da classe
print(pessoa.mostrarNome())  // Funciona, porque "mostrarNome()" está dentro da classe

2. fileprivate
O modificador fileprivate permite que as variáveis ou funções sejam acessíveis dentro do mesmo arquivo Swift, mas não fora dele.

fileprivate class Animal {
    fileprivate var tipo: String = "Cachorro"
}

let animal = Animal()
print(animal.tipo)  // Funciona porque está no mesmo arquivo

3. internal (Padrão)
O modificador de acesso padrão em Swift (se você não especificar nenhum).
Variáveis, funções, ou classes declaradas como internal podem ser acessadas em qualquer lugar dentro do mesmo módulo, que normalmente é um único projeto ou aplicativo.

internal class Carro {
    internal var modelo: String = "Sedan"
}

let carro = Carro()
print(carro.modelo)  // Funciona dentro do mesmo módulo (projeto)

4. public
public permite que variáveis, classes ou funções sejam acessíveis de qualquer lugar, inclusive fora do módulo onde foram definidas.

public class Computador {
    public var marca: String = "Apple"
    
    public func ligar() {
        print("Ligando o computador")
    }
}

protocol Desenhavel {
    func desenhar()
}

class Circulo: Desenhavel {
    func desenhar() {
        print("Desenhando um círculo")
    }
}
1. protocol
protocol define um protocolo, que é um conjunto de métodos ou propriedades que podem ser adotados por classes, structs ou enums.

let meuCirculo = Circulo()
meuCirculo.desenhar()  // Saída: Desenhando um círculo

1. Origem e Domínios de Aplicação
Exemplo de uso no desenvolvimento de aplicativos iOS:
Swift é amplamente usado para criar aplicativos móveis. Aqui está um exemplo básico de um aplicativo para iOS, que exibe um botão em uma interface gráfica que, ao ser pressionado, exibe uma mensagem:

import UIKit

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Criando um botão
        let botao = UIButton(type: .system)
        botao.setTitle("Clique Aqui", for: .normal)
        botao.frame = CGRect(x: 100, y: 100, width: 200, height: 50)
        botao.addTarget(self, action: #selector(mostrarMensagem), for: .touchUpInside)
        view.addSubview(botao)
    }
    
    @objc func mostrarMensagem() {
        print("Botão foi clicado!")
    }
}

2. Processo de Compilação:
Escrevendo o código-fonte: O código acima é salvo em um arquivo chamado Pessoa.swift.
Compilação: Você pode compilar o arquivo no terminal usando o comando:

swiftc Pessoa.swift -o executavelPessoa
Aqui, swiftc é o compilador Swift, e ele gera um executável chamado executavelPessoa.

Executando o código compilado: Após a compilação, você pode executar o programa:
./executavelPessoa

Saída:
Nome: Alice, Idade: 28

Nesse processo, o compilador transforma o código Swift em código de máquina otimizado para a plataforma, permitindo uma execução rápida e eficiente.

3. Usando o REPL (Read-Eval-Print Loop)
O REPL de Swift permite que você execute comandos de forma interativa sem precisar compilar todo o programa. Isso é útil para testar pequenos trechos de código.

1> func saudacao(nome: String) -> String {
2.     return "Olá, \(nome)!"
3. }
4> saudacao(nome: "Maria")
$R0: String = "Olá, Maria!"

## Paradigmas de Programação em Swift

1. Suporte à Programação Genérica
Swift oferece um excelente suporte à programação genérica, permitindo a criação de funções, estruturas e classes que funcionam com qualquer tipo de dado. Isso promove a reutilização de código e maior flexibilidade.

// Função genérica que pode aceitar qualquer tipo de parâmetro
func trocar<T>(a: inout T, b: inout T) {
    let temp = a
    a = b
    b = temp
}

var num1 = 5
var num2 = 10
trocar(a: &num1, b: &num2)
print(num1)  // Saída: 10
print(num2)  // Saída: 5

2. Mecanismos para Programação Concorrente

func downloadImagem() async -> String {
    // Simulação de um processo de download
    return "Imagem baixada"
}

func processar() async {
    let resultado = await downloadImagem()
    print(resultado)
}

Task {
    await processar()
}

3. Suporte a Tratamento de Exceções

enum ErroDeRede: Error {
    case semConexao
    case servidorIndisponivel
}

func carregarDados() throws {
    throw ErroDeRede.semConexao
}

do {
    try carregarDados()
} catch ErroDeRede.semConexao {
    print("Erro: Sem conexão de internet.")
} catch ErroDeRede.servidorIndisponivel {
    print("Erro: Servidor indisponível.")
}

4. Suporte a Tratamento de Eventos

import SwiftUI

struct ContentView: View {
    var body: some View {
        Button(action: {
            print("Botão clicado!")
        }) {
            Text("Clique aqui")
        }
    }
}

5. Paradigma Principal: Orientação a Objetos

class Veiculo {
    var velocidade: Int
    
    init(velocidade: Int) {
        self.velocidade = velocidade
    }
    
    func acelerar() {
        velocidade += 10
    }
}

class Carro: Veiculo {
    var modelo: String
    
    init(modelo: String, velocidade: Int) {
        self.modelo = modelo
        super.init(velocidade: velocidade)
    }
    
    override func acelerar() {
        velocidade += 20
    }
}

let carro = Carro(modelo: "Ferrari", velocidade: 50)
carro.acelerar()
print(carro.velocidade)  // Saída: 70

6. Suporte a Outros Paradigmas

Exemplo de Programação Funcional:

let numeros = [1, 2, 3, 4, 5]
let quadrados = numeros.map { $0 * $0 }
print(quadrados)  // Saída: [1, 4, 9, 16, 25]

Exemplo de Programação Protocolar:

protocol Dirigivel {
    func dirigir()
}

class Bicicleta: Dirigivel {
    func dirigir() {
        print("Pedalando a bicicleta.")
    }
}

let bicicleta = Bicicleta()
bicicleta.dirigir()  // Saída: Pedalando a bicicleta.

1. Principais Operadores: Aritméticos, Relacionais e Lógicos
Operadores Aritméticos:

let a = 10
let b = 3
let soma = a + b    // 13
let resto = a % b   // 1
print(soma, resto)

Operadores Relacionais:

let x = 10
let y = 5
print(x > y)    // true
print(x == y)   // false

Operadores Lógicos:

let a = true
let b = false
print(a && b)  // false
print(a || b)  // true

2. Possui Operador Ternário?

let numero = 10
let resultado = numero > 5 ? "Maior que 5" : "Menor ou igual a 5"
print(resultado)  // Saída: Maior que 5

3. Operador Lógico com Curto-Circuito

let x = false
let y = true

if x && y {
    print("Ambos são verdadeiros")
} else {
    print("Curto-circuito ocorreu")  // Esta linha será executada
}

let a = true
let b = false

if a || b {
    print("Curto-circuito com OR")  // Esta linha será executada
}

4. Regras de Precedência e Associatividade

Exemplo de Precedência:
let resultado = 2 + 3 * 4   // 2 + (3 * 4) = 14
print(resultado)  // 14

Exemplo de Associatividade:
let resultado = 5 - 3 - 2  // (5 - 3) - 2 = 0
print(resultado)  // 0

1. Suporte a Desvio Incondicional (Labels e Goto)
outerLoop: for i in 1...3 {
    for j in 1...3 {
        if j == 2 {
            break outerLoop  // Sai do loop externo
        }
        print("i: \(i), j: \(j)")
    }
}

## Suporte a Ponteiros e Referências em Swift

Exemplo de ponteiro com UnsafePointer:
let number = 42
let pointer = UnsafePointer<Int>(bitPattern: number)
print(pointer as Any)

## Função Genérica para Trocar Valores
// Função genérica que pode aceitar qualquer tipo de parâmetro
func trocar<T>(a: inout T, b: inout T) {
    let temp = a
    a = b
    b = temp
}

var num1 = 5
var num2 = 10
trocar(a: &num1, b: &num2)
print(num1)  // Saída: 10
print(num2)  // Saída: 5
