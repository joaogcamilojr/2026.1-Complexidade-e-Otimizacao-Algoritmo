# Aula 2 — Crescimento de Funções (Big-O)

A notação Big-O mede como o tempo de execução cresce conforme o tamanho da entrada (n) aumenta.  
**Não importa o tempo exato, e sim o comportamento de crescimento.**

| Complexidade | Crescimento | Performance |
| ------------ | ----------- | ----------- |
| O(1)         | Constante   | Excelente   |
| O(log n)     | Lento       | Muito bom   |
| O(n)         | Linear      | Ok          |
| O(n log n)   | Moderado    | Bom         |
| O(n²)        | Rápido      | Ruim        |
| O(2ⁿ)        | Explosivo   | Péssimo     |

## Estrutura

- **Java**: `java/complexidade/aula02/` — package `complexidade.aula02`
- **C++**: `cpp/` — `NN-descricao.cpp` (mesmo padrão de Estrutura de Dados: 01-hello-world, 02-busca-linear)

## Exemplos

| Arquivo (C++ / Java)          | Complexidade | Descrição            |
| ----------------------------- | ------------ | -------------------- |
| 01-o1-constante / Aula02*01*… | O(1)         | Acesso a elemento    |
| 02-o-log-n-busca-binaria / …  | O(log n)     | Busca binária        |
| 03-o-n-busca-linear / …       | O(n)         | Busca linear         |
| 04-o-n-log-n-merge-sort / …   | O(n log n)   | Merge Sort           |
| 05-o-n2-quadratico / …        | O(n²)        | Dois loops aninhados |
| 06-o-2n-exponencial / …       | O(2ⁿ)        | Fibonacci recursivo  |

## Como executar

### Java

```bash
cd aulas/aula-02/java
javac complexidade/aula02/*.java
java complexidade.aula02.Aula02_01_O1_Constante
# ... etc
```

### C++

```bash
cd aulas/aula-02/cpp
make
./01-o1-constante
# ... etc
```

Ou compilar manualmente: `g++ -std=c++17 -o 01-o1-constante 01-o1-constante.cpp`
