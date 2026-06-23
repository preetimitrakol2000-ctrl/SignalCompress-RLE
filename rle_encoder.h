#ifndef RLE_ENCODER_H
#define RLE_ENCODER_H

typedef struct {
    char element_type;
    int run_span;
} RLEToken;

int compress_stream(const char* raw_stream, RLEToken* target_buffer, int buffer_size);

#endif
