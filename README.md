# 1° Atividade Avaliativa Laboratorio de Programação - Sistema de Gerenciamento de Estacionamento Rotativo
Grupo: 
Jheferson Hugo Farias da Silva - Matrícula: 
Alexis: 

1. Análise do Problema

O estacionamento rotativo é um sistema usado em áreas movimentadas para aumentar a circulação de vagas, permitindo que os veículos permaneçam estacionados apenas por um tempo limitado mediante pagamento. O condutor estaciona em uma vaga sinalizada, escolhe o tempo permitido desejado, caso ultrapasse o limite de tempo, pode receber multa ou penalidade. Esse sistema ajuda a organizar o trânsito, facilita encontrar vagas e evita que automóveis ocupem os espaços públicos por muitas horas.

1.1. Fluxo lógico do programa:
1-Início do programa
2-Solicitar a placa do veículo
3-Solicitar tipo do veículo: Carro, moto e Caminhonete
4-Solicitar qual será o tempo de permanência do veículo
5-Calcular o valor mínimo do estacionamento com base no veículo:
      Se for Carro: Cobra R$5 por hora;
      Se for Moto: Cobra R$3 por hora;
      Se for Caminhonete: R$8 por hora;
6-Calcular o tempo total de permanência com base no tempo desejado:
   Se permanecer em até 1 hora: cobra somente o valor mínimo;
   Se permanecer por mais de 5 horas: desconto de 10% sobre o valor mínimo;
   Se permanecer no estacionamento por mais de 10 horas: cobra multa adicional de R$ 20 sobre o valor mínimo;
7-Apresentar o valor final ao usuário 
8-O usurário paga o valor calculado
9-Progama encerra.

2. Definição das Variáveis

(POSSIVEIS VARIAVEIS DO PROGRAMA)
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


3. Regras de negócio:

3.1. Tipo de Veículo:
 Carro → R$ 5/h
 Moto → R$ 3/h
 Caminhonete → R$ 8/h

3.2. Tempo de permanência:
 Até 1 hora → cobra 1 hora (mínimo)
 Mais de 5 horas → 10% de desconto
 Mais de 10 horas → + R$ 20 de multa


4. Fluxograma do processamento

-ESCOLHAS (switch-case)
Se opcao == 1 → carro  valorHora = 5
Se opcao == 2 → moto valorHora = 3
Se opcao == 3 caminhonete valorHora = 8

-CÁLCULO INICIAL
valorTotal = horas * valorHora

-DECISÃO 1 (if)
Se horas <= 1:
  valorTotal = valorHora
  
-DECISÃO 2 (if)
Se horas > 5:
    desconto = valorTotal * 0.10
    valorTotal = valorTotal - desconto
    
-DECISÃO 3 (if)
Se horas > 10:
    valorTotal = valorTotal + 20
    
SAÍDA
Mostrar valor final
