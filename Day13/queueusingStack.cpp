#include <bits/stdc++.h>

using namespace std;

struct Queue {
  stack < int > input, output;
  void Push(int data) 
  {
    while (!input.empty()) 
    {
      output.push(input.top());
      input.pop();
    }
   
    cout << "The element pushed is " << data << endl;
    input.push(data);
    
    while (!output.empty()) 
    {
      input.push(output.top());
      output.pop();
    }
  }
  // Pop the element from the Queue
  int Pop() {
    if (input.empty()) {
      cout << "Stack is empty";
      exit(0);
    }
    int val = input.top();
    input.pop();
    return val;
  }
  // Return the Topmost element from the Queue
  int Top() {
    if (input.empty()) {
      cout << "Stack is empty";
      exit(0);
    }
    return input.top();
  }
  // Return the size of the Queue
  int size() {
    return input.size();
  }
};
int main() {
  Queue q;
  q.Push(3);
  q.Push(4);
  cout << "The element poped is " << q.Pop() << endl;
  q.Push(5);
  cout << "The top of the queue is " << q.Top() << endl;
  cout << "The size of the queue is " << q.size() << endl;
}