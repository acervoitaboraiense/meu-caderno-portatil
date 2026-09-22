# Meu Caderno Portátil

## Sobre o Projeto

**Meu Caderno Portátil** é um aplicativo homebrew para console portátil de duas telas (2004) que transforma suas anotações escolares em uma experiência interativa de estudo. Com ele, você pode:

- Revisar suas matérias do 5º ao 9º ano em um formato de "caderno digital".
- Testar seus conhecimentos com quizzes de múltipla escolha.
- Acompanhar seu progresso e ver seus acertos.

---

## Objetivos

- Oferecer uma ferramenta de estudo divertida e interativa para estudantes do Ensino Fundamental.
- Demonstrar o potencial de consoles portáteis retrô como plataformas educacionais.
- Promover a autonomia no aprendizado, permitindo que o aluno revise o conteúdo no seu próprio ritmo.
- Manter o código aberto para que outros possam contribuir e aprender.

---

## Funcionalidades Planejadas

| Funcionalidade | Status |
|----------------|--------|
| Menu principal com seleção de matéria | Em desenvolvimento |
| Leitura de arquivos de texto com anotações | Em desenvolvimento |
| Modo de leitura (caderno digital) | Em desenvolvimento |
| Modo quiz com perguntas e respostas | Em desenvolvimento |
| Sistema de progresso e pontuação | Em desenvolvimento |
| Suporte para conteúdos do 5º ao 7º ano | Em desenvolvimento |
| Navegação por toque e botões | Em desenvolvimento |

---

## Plataforma

- **Console:** Portátil de duas telas (modelo de 2004) e compatíveis (via flashcart ou homebrew channel)
- **Emuladores:** DeSmuME, melonDS, DraStic (Android)
- **Linguagem:** C/C++ com devkitPro e libnds
- **Armazenamento:** Arquivos de texto com as matérias no cartão SD (via libfat)

---

## Para Desenvolvedores

O código-fonte está disponível neste repositório sob a licença MIT. Sinta-se à vontade para clonar, estudar e contribuir.

### Pré-requisitos para compilar

- [devkitPro](https://devkitpro.org) com suporte a ARM (devkitARM)
- Make (GNU)
- Emulador para testes (recomendado: melonDS ou DeSmuME)

### Como compilar localmente

1. Clone o repositório e acesse a pasta:
   ```bash
   git clone https://github.com/acervoitaboraiense/meu-caderno-portatil.git
   cd meu-caderno-portatil
   ```

2. Certifique-se de que o **devkitPro** está devidamente instalado e configurado em suas variáveis de ambiente.

3. Execute o comando Make para compilar:
   ```bash
   make
   ```

O arquivo `meu-caderno-portatil.nds` será gerado diretamente na raiz do projeto.

---

## Licença

Este projeto é distribuído sob a licença MIT, permitindo uso, modificação e distribuição livre, desde que os devidos créditos sejam dados à equipe do **Acervo Itaboraiense**.
