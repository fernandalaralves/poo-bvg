Gerenciamento de Notas de Alunos – C++

Projeto desenvolvido para praticar modularização, encapsulamento, modificadores de acesso e funções amigas em C++.

----------------------------------------------

Estrutura:
    Aluno.h
    Aluno.cpp
    Disciplina.h
    Disciplina.cpp
    main.cpp

------------------------------------------------

Funcionalidades:

- Registrar aluno (nome, matrícula, curso)

- Registrar disciplinas (nome, carga horária, nota)

- Verificar aprovação (nota ≥ 6.0) usando função amiga

- Exibir informações organizadas

-----------------------------------------------------------


Compilação e Execução:
g++ main.cpp Aluno.cpp Disciplina.cpp -o notas
./notas

-------------------------------------------------------------


Critério de Aprovação:

Aprovado: nota ≥ 6.0

Reprovado: nota < 6.0

----------------------------

UML (simplificado):
Aluno
- nome
- matricula
- curso

Disciplina
- nome
- cargaHoraria
- nota
friend verificarAprovacao()