#include <stdio.h>
#include "rle_encoder.h"

extern double verify_compression_ratio(int raw_bytes, int compressed_tokens);

int main() {
    printf("🗜️ Activating SignalCompress-RLE Pipeline Interface...\n\n");

    // Simulated camera frame stream (e.g., Black 'B' segments and White 'W' foreground segments)
    const char* camera_pixel_row = "BBBBBBBBWWWWBBBB";
    printf("📥 Ingesting Raw Pixel String Array: \"%s\"\n", camera_pixel_row);

    RLEToken optimization_pack[8];
    int encoded_count = compress_stream(camera_pixel_row, optimization_pack, 8);

    printf("\n🔮 Encoded Compressed Token Output Blocks:\n");
    for (int i = 0; i < encoded_count; i++) {
        printf("   • Slot [%d] ---> Pixel Profile Type: '%c' | Continuous Sequential Run Count: %d\n", 
               i, optimization_pack[i].element_type, optimization_pack[i].run_span);
    }

    double spatial_gain = verify_compression_ratio(16, encoded_count);
    printf("\n📊 Resource Savings Review: Compression Performance Quotient = %.2fX\n", spatial_gain);

    return 0;
}
