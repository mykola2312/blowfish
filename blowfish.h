#ifndef __BLOWFISH_H
#define __BLOWFISH_H

#include <stdint.h>

typedef struct {
    uint32_t XL;
    uint32_t XR;
    uint32_t P[18];
    uint32_t S[4][256];
} blowfish_t;

void blowfish_init(blowfish_t* bf, uint8_t* key, unsigned len);
void blowfish_encrypt(blowfish_t* bf);
void blowfish_decrypt(blowfish_t* bf);
void blowfish_encrypt_buffer(blowfish_t* bf,
        uint8_t* data, unsigned len);
void blowfish_decrypt_buffer(blowfish_t* bf,
        uint8_t* data, unsigned len);

#endif
