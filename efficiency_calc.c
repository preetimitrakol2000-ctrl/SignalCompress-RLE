#include "rle_encoder.h"
double verify_compression_ratio(int raw_bytes, int compressed_tokens) {
    int total_compressed_bytes = compressed_tokens * sizeof(RLEToken);
    return (double)raw_bytes / total_compressed_bytes;
}
