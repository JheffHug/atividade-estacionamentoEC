# 1° Atividade Avaliativa Laboratorio de Programação - Sistema de Gerenciamento de Estacionamento Rotativo
Grupo: 
- Jheferson Hugo Farias da Silva - Matrícula: 2023046579 
- Allexis Ryan Campos Silva - Matrícula: 20240015408 

---

## 1. Análise do Problema

O estacionamento rotativo é um sistema usado em áreas movimentadas para aumentar a circulação de vagas, permitindo que os veículos permaneçam estacionados apenas por um tempo limitado mediante pagamento. O condutor estaciona em uma vaga sinalizada, escolhe o tempo permitido desejado, caso ultrapasse o limite de tempo, pode receber multa ou penalidade. Esse sistema ajuda a organizar o trânsito, facilita encontrar vagas e evita que automóveis ocupem os espaços públicos por muitas horas.

1.1. Fluxo lógico do programa:
- 1 - Início do programa
- 2 - Solicitar a placa do veículo
- 3 - Solicitar tipo do veículo: Carro, moto e Caminhonete
- 4 - Solicitar qual será o tempo de permanência do veículo
- 5 - Calcular o valor mínimo do estacionamento com base no veículo:
  - Se for Carro: Cobra R$5 por hora;
  - Se for Moto: Cobra R$3 por hora;
  - Se for Caminhonete: R$8 por hora;
- 6 - Calcular o tempo total de permanência com base no tempo desejado:
  - Se permanecer em até 1 hora: cobra somente o valor mínimo;
  - Se permanecer por mais de 5 horas: desconto de 10% sobre o valor mínimo;
  - Se permanecer no estacionamento por mais de 10 horas: cobra multa adicional de R$ 20 sobre o valor mínimo;
- 7 - Apresentar o valor final ao usuário 
- 8 - O usurário paga o valor calculado
- 9 - Progama encerra.

---

## 2. Definição das Variáveis

(POSSIVEIS VARIÁVEIS DO PROGRAMA)
| Nome da variável | Tipo          | Finalidade                                   |
| ---------------- | ------------- | -------------------------------------------- |
| tipoVeiculo      | string ou int | Identificar se é carro, moto ou caminhonete  |
| horas            | float         | Tempo de permanência                         |
| valorHora        | float         | Preço por hora do veículo                    |
| valorTotal       | float         | Valor final a pagar                          |
| desconto         | float         | Valor do desconto                            |
| multa            | float         | Valor da multa                               |
| valorMinimo      | float         | Valor mínimo (1 hora)                        |
| opcao            | int           | Usado no switch-case para escolher o veículo |

---

## 3. Regras de negócio:

3.1. Tipo de Veículo:
 - Carro → R$ 5/h
 - Moto → R$ 3/h
 - Caminhonete → R$ 8/h

3.2. Tempo de permanência:
 - Até 1 hora → cobra 1 hora (mínimo)
 - Mais de 5 horas → 10% de desconto
 - Mais de 10 horas → + R$ 20 de multa

---

## 4. Fluxograma do processamento

- ESCOLHAS (switch-case)
  - Se opcao == 1 → carro  valorHora = 5
  - Se opcao == 2 → moto valorHora = 3
  - Se opcao == 3 caminhonete valorHora = 8

- CÁLCULO INICIAL
  - valorTotal = horas * valorHora

- DECISÃO 1 (if)
  - Se horas <= 1:
  - valorTotal = valorHora
  
- DECISÃO 2 (if)
  - Se horas <= 1:
  - valorTotal = valorHora
  - valorTotal = valorTotal - desconto
    
- DECISÃO 3 (if)
  - Se horas > 10:
  - valorTotal = valorTotal + 20
    
- SAÍDA:
Mostrar valor final

---

## 5. Compilação e Execução

Para compilar um código fonte em C, utiliza-se um compilador como o GCC (GNU Compiler Collection). O GCC é nativo de máquinas com o sistemas operacionais Linux. Para atividade em questão foi instalado o MinGW (abreviação de Minimalist GNU for Windows) é um conjunto de ferramentas que traz os compiladores e utilitários do mundo Linux (GNU) para o ambiente Windowns. Para uma abordagem mais prática também é possível compilar o código fonte em sites gratuitos, como o onlinegdb.com.

---

- Passos para Compilar em C no Windowns(Terminal/Linha de Comando):
  - Windows: Instale via MinGW.
  - No painel de controle da máquina, adicione o caminho da pasta bin do MinGW nas váriaveis do sistema do usuário da máquina
  - Abra o painel de controle do sistema(cmd)
  - Digite o caminha da pasta onde o arquivo do codigo fonte foi instalado
    - Exemplo: C:\Users\USER\meuprogramas\codigo_fonte
  - digite o comando: gcc main. -o nome_do_executavel(definirá o nome do progama executável)

- Como executar:
  - No Terminal(cmd: Navegue até a pasta onde salvou o main.c (ex: C:\Users\USER\meuprogramas\codigo_fonte).
  - Digite o comando: gcc main. -o nome_do_executavel(definirá o nome do progam executável)
  - Com isso um programa será gerado na mesma pasta do arquivo main.c
  - Digite .\nome_do_executavel.exe
  - Coloque as entradas e teste o programa no terminal
  - Vizulize a saída do programa

---

- Passos para Compilar em C através do site: olinegdb(opcional)

  - No site, copinando a URL abaixo no navegador:

```bash
https://www.onlinegdb.com/
```

---

- Como executar:
  - Copie o código fonte no compilador online
  - Clique na opção Run ou pressione F9 no teclado
  - Coloque as entradas e teste o programa
  - Vizulize a saída do programa
