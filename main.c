</> C
#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    char placa[10];
    int tipo;
    float horas;
    float valorHora = 0;
    float valorBase;
    float desconto = 0;
    float multa = 0;
    float valorFinal;
    char tipoTexto[20];

    // Entrada de dados
    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);

    printf("Tipo de veiculo:\n");
    printf("1 - Carro\n");
    printf("2 - Moto\n");
    printf("3 - Caminhonete\n");
    printf("Escolha: ");
    scanf("%d", &tipo);

    printf("Digite o tempo de permanencia (horas): ");
    scanf("%f", &horas);

    // Escolha do tipo de veículo (switch-case)
    switch(tipo) {
        case 1:
            valorHora = 5;
            sprintf(tipoTexto, "Carro");
            break;
        case 2:
            valorHora = 3;
            sprintf(tipoTexto, "Moto");
            break;
        case 3:
            valorHora = 8;
            sprintf(tipoTexto, "Caminhonete");
            break;
        default:
            printf("Tipo invalido!\n");
            return 0;
    }

    // Cálculo do valor base
    valorBase = horas * valorHora;

    // Regra: valor mínimo (até 1 hora)
    if(horas <= 1) {
        valorBase = valorHora;
    }

    // Aplicação de desconto (acima de 5 horas)
    if(horas > 5) {
        desconto = valorBase * 0.10;
    }

    // Aplicação de multa (acima de 10 horas)
    if(horas > 10) {
        multa = 20;
    }

    // Cálculo do valor final
    valorFinal = valorBase - desconto + multa;

    // Saída de dados
    printf("\n===== RESUMO =====\n");
    printf("Placa: %s\n", placa);
    printf("Tipo: %s\n", tipoTexto);
    printf("Tempo: %.2f horas\n", horas);
    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Multa: R$ %.2f\n", multa);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
