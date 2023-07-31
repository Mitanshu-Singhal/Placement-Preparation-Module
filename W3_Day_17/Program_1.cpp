void sortStack(stack<int> &stack)

{

    //initialize multiset 

    multiset<int > s;

    while(!stack.empty()){

        int num = stack.top();

        //insert values in muliset s

        s.insert(num);

        //and pop value simultaneously from stack 

        stack.pop();

    }

      for(auto it : s){

  //push all values in a stack in decreasing order

        stack.push(it);

    }

 

}