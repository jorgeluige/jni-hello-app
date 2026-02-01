# jnihello
- A Java Native Interface (JNI) é um padrão que permite ao código Java executando na JVM interagir com bibliotecas nativas escritas em C, C++ ou assembly.
  
![GitHub repo size](https://img.shields.io/github/repo-size/iuricode/README-template?style=for-the-badge)
![GitHub language count](https://img.shields.io/github/languages/count/iuricode/README-template?style=for-the-badge)
![GitHub forks](https://img.shields.io/github/forks/iuricode/README-template?style=for-the-badge)
![Bitbucket open issues](https://img.shields.io/bitbucket/issues/iuricode/README-template?style=for-the-badge)
![Bitbucket open pull requests](https://img.shields.io/bitbucket/pr-raw/iuricode/README-template?style=for-the-badge)

1. O Código Java (Main.java)
2. Gerar o Cabeçalho C (.h) execute: javac -h . Main.java
3. A Implementação em C (hello.c)

- Eu compilei o hello.c usando o mingw-w64, no WSL, poderia ser o mingw-w64 no Windows ou mesmo usar Visual Studio da Microsoft  

- No seu terminal WSL (Ubuntu/Debian)
```
sudo apt update 
sudo apt install mingw-w64
```

- Linha de comando para compilar o hello.c e gerar o hello.dll
```
x86_64-w64-mingw32-gcc -shared -I"/mnt/c/Users/SEU_USER/Java/jdk-1.8/include" -I"/mnt/c/Users/SEU_USER/Java/jdk-1.8/include/win32" hello.c -o hello.dll
```

<img width="351" height="213" alt="image" src="https://github.com/user-attachments/assets/f14afc12-7e03-4584-a3e1-a2a2e93d23e7" />

