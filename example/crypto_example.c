#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/evp.h>
#include <openssl/aes.h>

void encriptar(const char *clave, const char *texto, unsigned char *resultado)
{
    EVP_CIPHER_CTX *ctx;
    int len;
    int ciphertext_len;

    // Seleccionar el algoritmo de encriptación AES-256-CBC
    const EVP_CIPHER *cipher = EVP_aes_256_cbc();

    // Crear y configurar el contexto de encriptación
    ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, cipher, NULL, (unsigned char *)clave, NULL);

    // Encriptar el texto
    EVP_EncryptUpdate(ctx, resultado, &len, (unsigned char *)texto, strlen(texto));
    ciphertext_len = len;

    // Finalizar la encriptación
    EVP_EncryptFinal_ex(ctx, resultado + len, &len);
    ciphertext_len += len;

    // Limpiar y liberar el contexto
    EVP_CIPHER_CTX_free(ctx);
}

void desencriptar(const char *clave, const unsigned char *texto_encriptado, unsigned char *resultado)
{
    EVP_CIPHER_CTX *ctx;
    int len;
    int plaintext_len;

    // Seleccionar el algoritmo de encriptación AES-256-CBC
    const EVP_CIPHER *cipher = EVP_aes_256_cbc();

    // Crear y configurar el contexto de desencriptación
    ctx = EVP_CIPHER_CTX_new();
    EVP_DecryptInit_ex(ctx, cipher, NULL, (unsigned char *)clave, NULL);

    // Desencriptar el texto
    EVP_DecryptUpdate(ctx, resultado, &len, texto_encriptado, strlen((char *)texto_encriptado));
    plaintext_len = len;

    // Finalizar la desencriptación
    EVP_DecryptFinal_ex(ctx, resultado + len, &len);
    plaintext_len += len;

    // Limpiar y liberar el contexto
    EVP_CIPHER_CTX_free(ctx);
}

int main()
{
    const char *clave = "mi_clave_secreta";
    const char *texto_original = "Hola, mundo!";
    unsigned char texto_encriptado[1024];
    unsigned char texto_desencriptado[1024];

    // Encriptar el texto original
    encriptar(clave, texto_original, texto_encriptado);

    // Imprimir el texto encriptado
    printf("Texto encriptado: %s\n", texto_encriptado);

    // Desencriptar el texto encriptado
    desencriptar(clave, texto_encriptado, texto_desencriptado);

    // Imprimir el texto desencriptado
    printf("Texto desencriptado: %s\n", texto_desencriptado);

    return 0;
}
