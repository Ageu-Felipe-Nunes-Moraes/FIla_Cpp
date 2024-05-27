# include <iostream>
# include <vector>
# include <chrono>
# include <thread>

using namespace std;

// Class for stacks operations
class Queue{
private:
    std::vector <int> list;
public:
    // Initial function
    Queue(){
        list = {};
    }

    // Sleep function
    void sleepForOneSecond() {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Print list
    void printList(){
        cout << "Lista: [ ";
        for (const auto& item : list) {
            cout << item << ", ";
        }
        cout << " ]" << endl;
    }

    // Return list
    std::vector <int> getList() const{
        return list;
    }

    // Function that checks if it is empty
    bool empty(){
        return list.size() == 0;
    }

    // Puts item in the final list
    void push(int item){
        list.push_back(item);
    }
    
    // Removes the last item from the list
    void pop(){
        // Only delete the item from the list if it is not empty
        if (not empty()){
            list.erase(list.begin());
        }else{
            cout << "A lista está vazia" << endl;
        }
    }

    //  Stores the last item in the list in a variable
    int top(){
        // Return a value only if the list is different from empty
        if (not empty()){
            return list[0];
        }
        // Return a default value if the list is empty
        return -1; // or throw an exception
    }
};

int main(){
    // Declare of the class
    Queue queue;

    // Fills the list with 100 numbers
    for (int i = 0; i < 101; i++) {
        queue.push(i);
        queue.printList();
        queue.sleepForOneSecond();
    }
    cout << endl;

    queue.printList();
    cout << "Aguarde..." << endl;
    queue.sleepForOneSecond();

    // Emptying the entire list
    while (not queue.empty()){
        int queue_first_item = queue.top();
        queue.pop();
        cout << "Item removido da lista com sucesso: " << queue_first_item << endl;
        queue.printList();
        queue.sleepForOneSecond();
    }

    return 0;
}