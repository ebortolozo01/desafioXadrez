# ♟️ Desafio de Xadrez em C - Nível Mestre

Este projeto simula os movimentos de peças de xadrez em linguagem C, utilizando **recursividade**, **loops aninhados** e **lógica de controle de fluxo avançada**.

## 🎯 Peças Simuladas

- **Torre**: movimento recursivo 5x para a Direita
- **Bispo**: movimento recursivo + loop aninhado 5x na diagonal (Cima Direita)
- **Rainha**: movimento recursivo 8x para a Esquerda
- **Cavalo**: movimento em "L" (2 para Cima e 1 para Direita) usando loops aninhados com `continue` e `break`

## 💻 Como rodar

### Pré-requisitos

- Compilador C (como GCC)

### Passos

1. **Salve o código como** `xadrez.c`
2. **Compile:**

```bash
gcc xadrez.c -o xadrez
```

3. **Execute:**

```bash
./xadrez
```

## 📌 Observações

- O código não requer entrada do usuário.
- Cada peça imprime o movimento de forma clara no terminal.
- Ideal para praticar estruturas de repetição, recursão e controle de fluxo.

---

Projeto desenvolvido para fins educacionais no contexto do desafio "Movimentos Complexos - Xadrez em C".
