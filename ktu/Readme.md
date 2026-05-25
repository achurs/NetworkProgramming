1. Distance Vector
  - Successfully obtained the output on the first attempt.
  - Need to concentrate on the calculation logic.
  - Update the distance matrix using the following condition:
    ```
    if (dist[i][k] + dist[k][j] < dist[i][j]) {
      dist[i][j] = dist[i][k] + dist[k][j];
    }
    ```
  2. Leaky Bucket
     - Had a small hiccup on the logic:
       ```c
       if(bucket + packetsize <= bucketsize) {
         bucket += packetsize;
       }
       ```
     - The main logic is the one above the leaking logic, which I had completed without issue:
       ```c
       if(bucket >= outputrate) {
         bucket -= outputrate;
       }
       ```

3. TCP/IP client-server model