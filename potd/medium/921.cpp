// using stack
class Solution {
public:
    int minAddToMakeValid(string s) {

     int size = 0, open = 0;

     for(char ch : s){

        if(ch == '('){
            size++;
        }
        else if(ch  == ')' && size > 0){
            size--;
        }
        else{
            open++;
        }
     }   
     return size + open;
    }
};

///wihtout stack
class Solution {
public:
    int minAddToMakeValid(string s) {

     int size = 0, open = 0;

     for(char ch : s){

        if(ch == '('){
            size++;
        }
        else if(ch  == ')' && size > 0){
            size--;
        }
        else{
            open++;
        }
     }   
     return size + open;
    }
};