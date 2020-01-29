## <b>Códigos das Questões em Linguagem C </b>
`v.1.0`

- Este material é destinado ao estudo de programação básica usando a linguagem C. 

- O intuito destas questões é fazer com que o aluno entenda a resolução de questões simples que envolvem o conteúdo de algoritmos e programação básica.

----
### <b>Informações sobre o Professor </b>
- Prof. Maurício Moreira Neto
- Lattes: [Link Currículo Lattes](http://lattes.cnpq.br/7534400645876830)
- E-mail: <maumneto@gmail.com>
- Site: <http://lia.ufc.br/~maumneto/>
- Site da Disciplina: <https://maumneto.github.io/pce/index.html>

----

### <b>Hierarquia dos Materiais </b>
- Cada `folder` possui um conjunto de arquivos C referentes as questões da lista de exercício.

- A resolução da lista de exercício é de fundamental importância para a fixação do conteúdo ministrado (além de ser divertido!). 

<b>Lembre-se: </b> 

><i>I hate programming, I hate programming, I hate programming!!<br>
>Oh, it work!!<br>
>I love programming so much...</i><br>
> -- **Any programming student**

- A seguir é descrito o enunciado das questões que cada `folder` possui!

----
### <b>Lista de Exercício 1</b>
Esta lista de exercício é referente aos tópicos de: 
* _algoritmos_ 
* _linguagem C_
* _tipos de dados_
* _comandos de entrada e saída de dados_
* _operadores_
* _estruturas de decisão_
* _estruturas de repetição_

`3. Faça um programa em que o usuário digite três números e imprima a soma deles.`
   
`4. Faça um programa que leia uma temperatura em graus Celsius e apresente o resultado da conversão para Fahrenheit. Nota: a fórmula da conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em fahrenheit e C a temperatura em Celsius.`
   
`5. Faça um programa que leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. Nota: a fórmula da conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.`
   
`6. Faça um programa que leia um ângulo em graus e apresente a conversão em radianos. Nota: a fórmula de conversão é R = G*/180, sendo que G é o ângulo em graus e R em radianos.`
   
`7. Faça um programa que leia quatro números e calcule a média aritmética e, posteriormente, imprima o resultado.`
   
`8. Faça um programa que receba dois números e mostre qual deles é o maior.`
   
`9.  Faça um programa que leia um número e, caso seja positivo, calcule e mostre:`
`a.	O quadrado do número digitado`
`b.	A raiz quadrada do número`

`10. Faça um programa que leia um número digitado e diga se este número é par ou ímpar.`
    
`11. Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: **Empréstimo não concedido**, caso contrário imprima: **Empréstimo concedido**.`
    
`12. Faça um programa que receba a altura e o sexo de uma pessoa. Calcule e mostre seu peso ideal utilizando as seguintes fórmulas:`
`a. Homens: (72.7*h) – 58`
`b. Mulheres: (62.1*h) – 44.7`

`13. Use o comando switch para escrever um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este número (exemplo: 1 – domingo, 2 – segunda-feira, etc).`

`14. Faça um programa que calcule as raízes da equação de 2º grau. Lembre-se que: x = (-b ± √Δ)/2a onde Δ = b2 – 4ac`
`E ax2 + bx + c = 0 representa uma equação do 2º grau.`
`A variável 'a' tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação do segundo grau”.`
    `Se Δ<0, não existe real. Imprima a mensagem “Não existe raiz”.`
    `Se Δ=0, existe uma raiz real. Imprima a raiz e a mensagem Raiz Única.`
    `Se Δ≥0, imprima as duas raízes`

`15. Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo com a tabela abaixo:`
    

**IMC**         |  **Classificação**
--------------- | ------------------
< 18.5          | Abaixo do peso
\> 18.5 e <= 25 | Peso ideal
\> 25.0 e <= 30 | Excesso de peso
\> 30 e <= 35   | Obesidade grau 1
\> 35 e <= 40   | Obesidade grau 2 -  severa
\> 40           | Obesidade grau 3 -  mórbida


`16. Escreva um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. O programa deve calcular e o valor a ser pago por aquele determinado lanche. Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue abaixo:`

**Especificação**         |  **Código**  |  **Preço** 
---------------------     | ------------ |  ---------------
Cachorro quente           |     100      |  1.20
Bauru Simples             |     101      |  1.30
Hamburguer                |     102      |  1.50
Suco                      |     103      |  2.20
Refrigerante              |     104      |  1.00


`17.  Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o novo preço, e escreva também uma mensagem em função do preço novo (de acordo com a seguinte tabela).`

**Preço Antigo**        |  **Percentual de Aumento**
---------------         | :------------------:
Até R$ 50               |       5%
Entre R$ 50 e R$ 100    |       10%
Acima de R$ 100         |       15%


`18.   Faça um programa que utilize o comando while para mostrar uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM” após a contagem.`

`19. Faça um programa que peça para o usuário digitar 10 valores e calcule a média aritmética dos valores digitados.` 


`20.   Faça um programa que calcule a diferença entre a soma dos quadrados dos primeiros 10 números naturais e o quadrado da soma. `
`Exemplo: a soma dos quadrados dos dez primeiros números naturais é: 1²+ 2² + ... + 10² = 385`
`O quadrado da soma dos dez primeiros números naturais é: (1 + 2 + ... + 10)² = 3025`
`A diferença entre a soma dos quadrados dos dez primeiros números naturais e o quadrado da soma é: 3025 – 385 = 2640.`

`21.  Escreva um programa que leia um número inteiro maior que zero e retorne a soma de todos os algarismos. Por exemplo: ao número 251 corresponderá o valor 8 (2+5+1). Se o número lido não for maior do que zero, programa terminará com a mensagem “número inválido”. Nota: para facilitar, limita-se o no máximo de 3 casas decimais.`

`22. Na matemática, o número harmônico designado por H(n) define-se como sendo a soma da série harmônica:`
    `a. _H(n) = 1 + 1/2 + 1/3 + .... 1/n_`
`Faça um programa que leia um valor de n inteiro e positivo e apresente o valor de H(n).`

`23. Faça um programa que leia um valor digitado e calcule o fatorial deste número.`

`24. Faça um programa que apresente um menu de opções para cálculo das seguintes operações entre dois números:`
    `a.	Adição (opção 1)`
    `b.	Subtração (opção 2)`
    `c.	Multiplicação (opção 3)`
    `d.	Divisão (opção 4)`
    `e.	Saída (opção 5)`
`O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado.`

`25. Faça um programa que receba um número inteiro N e mostre os N termos da sequência de Fibonacci.`

----
### <b>Lista de Exercício 2</b>
Esta lista de exercício é referente aos tópicos de: 
* _arrays_ 
* _string_
* _struct_
* _funções_
* _ponteiros_

`1. Faça um algoritmo que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.`

`2. Faça um algoritmo que leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.`

`3. Faça um algoritmo que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.`