package br.com.jnihello.main;

public class Main {
    // 1. Declarar o método nativo
    public native void dizerOla();

    static {
        // 2. Carregar a biblioteca (o nome do arquivo será libhello.so ou hello.dll)
        System.loadLibrary("hello");
    }

    public static void main(String[] args) {
        new Main().dizerOla();
    }
}