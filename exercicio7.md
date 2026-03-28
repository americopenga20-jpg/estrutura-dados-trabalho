7. O(n²) não é adequado para grandes quantidades de dados

Quando dizemos que um algoritmo tem complexidade **O(n²)** (lê-se “ordem de n ao quadrado”), significa que o tempo de execução cresce proporcionalmente ao quadrado do tamanho da entrada.

 Por que isso é um problema?

Se você dobrar o tamanho dos dados:

* O trabalho não dobra… ele **quadruplica** 😬

Exemplo:

* n = 100 → ~10.000 operações
* n = 1.000 → ~1.000.000 operações
* n = 10.000 → ~100.000.000 operações

Ou seja, cresce **muito rápido**.

 Impacto na prática

Para conjuntos de dados grandes:

* Algoritmos O(n²) ficam **lentos**
* Podem consumir muito tempo ou até travar sistemas
* Não escalam bem

 Comparação rápida

* **O(n)** → cresce linearmente (bom 👍)
* **O(n log n)** → eficiente para muitos casos (ótimo 👍)
* **O(n²)** → aceitável só para entradas pequenas ⚠️

 Exemplos comuns de O(n²)

* Bubble Sort
* Selection Sort
* Comparar todos os pares de elementos de uma lista Conclusão

O(n²) não é adequado para grandes volumes de dados porque o custo cresce rápido demais. Em sistemas reais, normalmente se busca algoritmos mais eficientes, como O(n log n) ou O(n).

Se quiser, posso te mostrar um exemplo prático comparando tempos entre O(n) e O(n²) — ajuda bastante a visualizar isso.
