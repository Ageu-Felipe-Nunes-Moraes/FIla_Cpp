# Queue - C++ Implementation

This project consists of a simple implementation of a queue in C++. A queue is a data structure that follows the "First In, First Out" (FIFO) principle, where the first element added is the first to be removed.

## Features

- **Push:** Adds an item to the end of the queue.
- **Pop:** Removes the first item from the queue, if any.
- **Top:** Returns the first item from the queue without removing it.
- **Empty:** Checks if the queue is empty.

## How to Use

1. Instantiate an object of the `Queue` class.
2. Add elements to the queue using the `push(item)` method.
3. Remove elements from the queue using the `pop()` method.
4. Retrieve the first element without removing it using the `top()` method.
5. Check if the queue is empty using the `empty()` method.

## Example Usage

```Cpp
int main(){
    // Declare an object of the class
    Queue queue;

    // Fill the list with 100 numbers
    for (int i = 0; i < 101; i++) {
        queue.push(i);
        queue.printList();
        queue.sleepForOneSecond();
    }
    cout << endl;

    queue.printList();
    cout << "Please wait..." << endl;
    queue.sleepForOneSecond();

    // Emptying the entire list
    while (not queue.empty()){
        int queue_first_item = queue.top();
        queue.pop();
        cout << "Item successfully removed from the list: " << queue_first_item << endl;
        queue.printList();
        queue.sleepForOneSecond();
    }

    return 0;
}
```

This example demonstrates how to fill a queue with numbers from 0 to 100, print the queue, wait for a few seconds, and then remove each element from the queue while printing the resulting queue.

## Author

This code was developed by Ageu Felipe Nunes Moraes (myself) as part of a personal project dedicated to strengthening and maturing coding skills. For any questions or suggestions, please contact me at [ageumoraes67@gmail.com](mailto:ageumoraes67@gmail.com).

## Disclaimer

This is a software project developed by an individual and has no affiliation with any other entity.
