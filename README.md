# Análise dos Algoritmos de Ordenação

Foram implementados os algoritmos Bubble Sort e Selection Sort para vetores de tamanho 100, 1000 e 10000, preenchidos em ordem decrescente (pior caso).

Ambos possuem complexidade O(n²), o que explica o crescimento significativo do tempo de execução conforme o tamanho do vetor aumenta.

O número de comparações é praticamente igual nos dois algoritmos.

Entretanto, o Bubble Sort realiza muito mais movimentações, pois troca elementos a cada comparação verdadeira.

Já o Selection Sort realiza apenas uma troca por iteração externa, reduzindo drasticamente o número de movimentações.

Portanto, o Selection Sort apresentou melhor desempenho, principalmente para vetores maiores.

Observou-se que o tempo de execução cresce rapidamente conforme o tamanho do vetor aumenta, confirmando o comportamento quadrático dos algoritmos.
