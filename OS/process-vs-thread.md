## Process vs Thread

| **Process** | **Thread** |
| --- | --- |
| 1. process is a program under execution. | 1. Thread is a or some program inside a process sharing same resources. |
| 2. OS treat different process differently. | 2. All user level thread treated as a single process by OS. |
| 3. Blocking a process will not block another process. | 3. Blocking a thread will block whole process. |
| 4. Context switching is slower. | Context switching is faster. |
| 5. independent | 5. interdependent |