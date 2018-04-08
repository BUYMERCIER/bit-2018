# Computer Networks Assignments

Corentin MERCIER - 1820186336

## Chapter 3

#### 18. A channel has a bit rate of 4 kbps and a propagation delay of 20 msec. For what range of frame sizes does stop-and-wait give an efficiency of at least 50 percent?

Bit rate = 4 kbps  
One-way propagation delay = 20 ms  

```
Efficiency = Transmission time of packet/(Transmission time of packet + 2 * Propagation delay)
0.5 = x/(x + 2 * 20 * 10-3)
x = 20 * 10-3
x = 40 * 10-3
```

Minimum frame size / Bit rate = 40 * 10-3  
Therefore, Minimum frame size = 40 * 10-3 * 4 * 103 = **160 bits**

#### 30. Consider an error-free 64-kbps satellite channel used to send 512-byte data frames in one direction, with very short acknowledgements coming back the other way. What is the maximum throughput for window sizes of 1, 7, 15, and 127? The earth-satellite propagation time is 270 msec.


