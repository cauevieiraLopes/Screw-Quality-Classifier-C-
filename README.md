# 🔩 README Screw Quality Classifier (C++)
# 📌 Descrição

Este projeto é um sistema simples de classificação de qualidade de parafusos, desenvolvido em C++.

O programa recebe o tamanho de parafusos em milímetros e os classifica automaticamente em diferentes categorias de qualidade, simulando um processo básico de controle de qualidade industrial.

# 🎯 Objetivo
Praticar estruturas de repetição\
Trabalhar com condicionais encadeadas\
Aplicar lógica em um problema prático\
Simular um sistema de inspeção de produção

# ⚙️ Funcionamento
Entrada de dados

O usuário informa o tamanho do parafuso (em mm):\
cin >> tamanho;
* Apenas valores positivos são aceitos

## Classificação dos parafusos

* O sistema classifica os parafusos com base no tamanho:

| Condição            | Classificação       |
| ------------------- | ------------------- |
| `< 10 mm`           | Refugo (descartado) |
| `= 12.5 mm`         | Padrão Ouro         |
| `> 10 mm e ≤ 15 mm` | Padrão Prata        |
| `> 15 mm`           | Para ajuste         |

## Lógica aplicada

if(tamanho < 10)\
{\
      refugo++;\
}\
else if(tamanho > 10 && tamanho <= 15)\
{\
    if(tamanho == 12.5)\
    {\
        padrao_ouro++;\
    }\
    else\
    {\
        padrao_prata++;\
    }\
}\
else if(tamanho > 15)\
{\
    para_ajuste++;\
}

## Controle de execução

O programa continua rodando até o usuário escolher parar:\
[1] - Sim\
[0] - Não

# 🧩 Exemplo de execução

mm: 12.5 → Padrão Ouro\
mm: 14   → Padrão Prata\
mm: 8    → Refugo\
mm: 18   → Ajuste

# 🧠 Conceitos aplicados
* Laços do-while (validação e repetição)
* Estruturas condicionais (if / else if)
* Contadores (acumuladores)
* Controle de fluxo baseado em entrada do usuário
