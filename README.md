# SignalCompress-RLE

A high-performance sequential telemetry compression subsystem written in C99 for computer vision edge devices. By applying linear **Run-Length Encoding (RLE)** patterns over data frames, this toolkit collapses long strings of repeating sensory data into short, manageable data vectors.

## 📉 Compression Mechanics
* **Data Strategy:** Sequential scanning to group identical, consecutive status blocks.
* **Space Complexity:** Constant $O(1)$ additional working tracking overhead.
* **Data Efficiency Bounds:** Dramatically reduces network payloads when processing sparse image streams or repetitive binary logs.
