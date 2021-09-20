class Solution
{
    public:
    
    /*
    Niave solution:
    
    2 loops lagaake har element ke liye check karo ki kya uske aage wale saare elements 
    usse chote hai ki nhi 
    agar hai to usko include karo answer LL me
    
    TC -> O(n^2)
    SC -> O(1)
    
    second approach:
    
    TC -> O(n)
    SC -> O(1)
    
    LL ko reverse karo and jab traverse karoge tab jaise hi cur element ka data aage wale 
    se bada ho tab aage wale ko gayab karo by joining cur next to aage wale ka next
    
    SIDHA TRAVERSE  karoge to aage wala pointer gayab hota hai AND current wala pointer 
    gayab karne me lode lagte hai isiliye ulta kiya apan ne
    
    */
    
   //Bina reverse use kiye kiya hai
    
    Node *compute(Node *head)
    {
        // your code goes here
        
         if(head->next == NULL){
          return head;
      }
      Node* nNode = compute(head->next);
      if(head->data<nNode->data){
          free(head);
          return nNode;
      }
      else{
          head->next = nNode;
          return head;
      }
    }
    
};
