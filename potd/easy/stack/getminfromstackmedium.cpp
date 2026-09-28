// class SpecialStack {
//   public:
//     stack<int> s1;
//     stack<int> s2;
//     SpecialStack() {
//         // Define Stack
//     }

//     void push(int x) {
//         if (s1.empty()) { //jab st1 mera empty hoga toh pehela element as it daal do kyuki uss time mera vahi min hoga 
//             s2.push(x);    
//         } else {
//             s1.push(x);
//             s2.push(min(x, s2.top())); // jab st1 mera empty ni hoha aur jo element aayega ander jaane ko toh st1 mai toh aise daal denge lekin st2 mai x aur st2 ka top ka min st2 mai jayega
//         }
//     }

//     int pop() {
//         if (s1.empty())   
//             return -1;
//         else {
//             int element = s1.top(); 
//             s1.pop();
//             s2.pop();
//             return element;
//         }
//     }

//     int peek() {
//         // Returns top element of the Stack
//         if (s1.empty())
//             return -1;
//         else
//             return s1.top();
//     }

//     bool isEmpty() {
//         // Check if stack is empty
//         if (s1.size() == 0)
//             return 1;
//         else
//             return 0;
//     }

//     int getMin() {
//         if (s1.empty())
//             return -1;
//         else
//             return s2.top();
//     }
// };

//--------->interviewer will say dont use two stacks then below is the solution
// isme mereko 2 cheeze yaad rkhhi hai ki orginal number store karane ke liye mai * 101 krunga and 
class SpecialStack {
  public:
    stack<int> s1;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        // Add an element to the top of Stack
        if (s1.empty()) {
            s1.push(x * 101 + x);
        } else {
            s1.push(x * 101 + min(x, s1.top() % 101));
        }
    }

    int pop() {
        // Remove the top element from the Stack
        if (s1.empty()) return -1;
        else {
            int element = s1.top() / 101;
            s1.pop();
            return element;
        }
    }

    int peek() {
        // Returns top element of the Stack
        if (s1.empty()) return -1;
        else
            return s1.top() / 101;
    }

    bool isEmpty() {
        // Check if stack is empty
        if (s1.empty()) return 1;
        else return 0;
    }

    int getMin() {
        // Finds minimum element of Stack
        if (s1.empty()) return -1;
        else {
            int mini = s1.top() % 101;
            return mini;
        }
    }
};
