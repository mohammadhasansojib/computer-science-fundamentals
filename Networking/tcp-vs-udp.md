# TCP vs UDP

TCP (Transmission Control Protocol) and UDP (User Datagram Protocol), the two primary protocols at the transport layer of the TCP/IP model. Applications choose between these protocols based on whether they need reliable or unreliable data transmission.

## TCP (Transmission Control Protocol)

- How it works: TCP provides reliable data transmission. It breaks data into segments and ensures all pieces are received and reassembled correctly. If data is lost, TCP can recover it.

### Reliability mechanisms:
- Three-way Handshake: Establishes a reliable connection by exchanging SYN and ACK messages.
- Sequence Numbers: Assigns numbers to data segments for correct reordering and detection of missing segments.
- Acknowledgements: The receiving computer acknowledges successful receipt of data segments.
- Checksum: Performs a calculation on the data to ensure data integrity during transmission. If checksums don't match, the segment is discarded.
- Drawbacks: TCP's reliability comes at the cost of resource usage and latency.
- Use Cases: Ideal for tasks where stability and complete data integrity are crucial, such as web browsing and file transfers.


## UDP (User Datagram Protocol)

- How it works: UDP offers unreliable communication and does not have the error handling, sequencing, or reliability features of TCP. It prioritizes speed, simply sending data without caring if it's lost.

- Benefits: It's lighter and quicker due to its minimal header information, leading to lower latency.
- Drawbacks: Data loss is possible.
- Use Cases: Very useful for situations requiring live, real-time connections where minor data loss is acceptable, but latency is critical.

Examples include: Voice calls, Video calls, Online gaming.