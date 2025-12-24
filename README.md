# Soluções do LeetCode

Este repositório agrupa minhas soluções para os desafios do [leetcode.com](https://leetcode.com). Cada arquivo `.c` representa um problema resolvido (ou não 😅) em C, organizados pelo número do problema seguido do título oficial para facilitar buscas manuais. Problemas ainda não resolvidos estão com caractre _ no nome arquivo para aparecerem no topo.

## Estrutura

- Arquivos `.c` no nível raiz contêm o código-fonte compilável para cada desafio.
- O `Makefile` oferece um alvo `clean` para limpar os binários gerados sem apagar o código fonte.
- O `.gitignore` mantém apenas os arquivos relacionados aos testes que não devem ser versionados.

## Como usar

1. Compile o arquivo `.c` desejado com `gcc`/`clang`, por exemplo:

```sh
gcc -std=c11 -O2 3.LongestSubstringWithoutRepeatingCharacters.c -o 3.LongestSubstringWithoutRepeatingCharacters
```

2. Execute o binário gerado:

```sh
./3.LongestSubstringWithoutRepeatingCharacters
```

3. Depois de testar, limpe os executáveis com:

```sh
make clean
```

## Notas

- Este repositório é pessoal e reflete desafios concluídos na data das submissões; novos problemas são adicionados conforme resolvidos.
- Sinta-se à vontade para explorar os códigos e adaptá-los para seus próprios estudos.
