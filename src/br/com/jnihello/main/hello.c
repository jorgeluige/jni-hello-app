#include <jni.h>
#include <stdio.h>
#include "br_com_jnihello_main_Main.h"

// JNIEnv: Ponteiro para o ambiente Java (permite interagir com a JVM)
// jobject: Referência ao objeto Java que chamou este método
JNIEXPORT void JNICALL Java_br_com_jnihello_main_Main_dizerOla(JNIEnv *env, jobject obj) {
    printf("Olá do C! JNI funcionando com sucesso.\n");
}
