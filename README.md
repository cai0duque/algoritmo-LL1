# Analisador Sintático LL(1) - Descendente Recursivo

Este repo tem um código em C de um **Analisador Sintático Descendente Recursivo (Parser LL1)**, construído como atividade prática da disciplina de Compiladores.

### Gramática Suportada
O código valida expressões matemáticas simples geradas pela gramática, processando o caminho recursivo diretamente no console:
```text
E  -> i E'
E' -> + i E' | λ (lambda)
```
*(Nota: Todo input deve obrigatoriamente acabar com o símbolo `$`).*

## Como Executar
1. Acesse [OneCompiler/c](<https://onecompiler.com/c>)
2. Cole o código.
3. Execute.

## Exemplos de Teste
- **Caminhos de Sucesso:** `i$`, `i+i$`, `i+i+i$`, `i+i+i+i$`
- **Caminhods de Erro (Falha sintática):** `+$`, `ii$`, `i++i$`, `i+i`
