#include <assert.h>  // For assert statements
#include <stdio.h>   // For printing
#include "queue.h"   // Include your queue header file


int main() {
    queue q;
    
    // 1. Test: After initializing the queue, it must be empty
    init_queue(&q);
    assert(empty(&q));  // The queue must be empty after initialization
    
    // 2. Test: After enqueueing and dequeueing a single element
    int x = 5;
    enqueue(&q, x);     // Enqueue the element 5
    int y = dequeue(&q);  // Dequeue the element
    assert(x == y);     // The dequeued value must be the same as the enqueued value
    assert(empty(&q));  // The queue must be empty after this operation
    
    // 3. Test: Enqueue two elements and dequeue both
    int x0 = 10;
    int x1 = 20;
    enqueue(&q, x0);  // Enqueue 10
    enqueue(&q, x1);  // Enqueue 20
    
    int y0 = dequeue(&q);  // Dequeue the first element
    int y1 = dequeue(&q);  // Dequeue the second element
    
    assert(x0 == y0);  // The first dequeued element must match the first enqueued element
    assert(x1 == y1);  // The second dequeued element must match the second enqueued element
    assert(empty(&q)); // The queue should be empty after both dequeues
    
    printf("All tests passed!\n");
    return 0;
}