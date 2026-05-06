# 1° Atividade Avaliativa Laboratorio de Programação - Sistema de Gerenciamento de Estacionamento Rotativo
Grupo: 
Jheferson Hugo Farias da Silva - Matrícula: 
Alexis: 

1. Análise do Problema

O estacionamento rotativo é um sistema usado em áreas movimentadas para aumentar a circulação de vagas, permitindo que os veículos permaneçam estacionados apenas por um tempo limitado mediante pagamento. O motorista estaciona em uma vaga sinalizada, escolhe o tempo permitido e, caso ultrapasse o limite sem renovar, pode receber multa ou outra penalidade. Esse sistema ajuda a organizar o trânsito, facilita encontrar vagas e evita que carros ocupem os espaços públicos por muitas horas.

Para a atividade em questão o programa irá tomar as seguintes decisões: verificar o horário de entrada e saída do veículo, calcular quanto tempo o automôvel ficou estacionado, definir o valor a ser pago com base no tempo utilizado, identificar se o tempo máximo permitido foi ultrapassado, aplicar  multas em caso de atraso, registrar os dados do veículo e confirmar o pagamento realizado.
O cliente entra com o veículo.


O sistema registra:
-Tipo do veículo
-Horário de entrada
Quando o cliente sai:
-O sistema calcula o tempo total de permanência
-Aplica a tabela de preços
-Verifica regras (desconto, multa, mínimo)
-O cliente paga o valor calculado

O sistema precisa decidir:
Qual o tipo de veículo
Qual o valor por hora
Se o tempo é:
Até 1 hora → cobrar valor mínimo
Acima de 5 horas → aplicar desconto
Acima de 10 horas → aplicar multa
Calcular o valor total final

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



3. Regras do sistema

Carro → R$ 5/h
Moto → R$ 3/h
Caminhonete → R$ 8/h

Regras de negócip:

 Até 1 hora → cobra 1 hora (mínimo)
 Mais de 5 horas → 10% de desconto
 Mais de 10 horas → + R$ 20 de multa

Entrada de dados:
-Tipo de veículo:
Carro 
Moto 
Caminhonete
-Tempo de permanência(horas)


-ESCOLHAS (switch-case)
Se opcao == 1 → carro  valorHora = 5
Se opcao == 2 → moto valorHora = 3
Se opcao == 3 caminhonete valorHora = 8
 CÁLCULO INICIAL
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
