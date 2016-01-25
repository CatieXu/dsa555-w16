template <class T>
class SList{
    //nesting to avoid naming conflicts with other classes that have 
    //nodes
    struct Node{
        T data_;
        Node* next_;
        Node(const T& data=T{}, Node* next = nullptr){
            data_=data;
            next_=next;
        }
    };
    Node* first_;  //pointer to first node in linked list
    Node* last_;   //pointer to last node in linked list
public:
    //nesting iterators to avoid naming conflicts, these are public
    //as we want non-members to be able to create and use them.
    class const_iterator{
        friend class SList;
        Node* curr_;
    protected:
        const_iterator(Node* curr){
            curr_=curr;
        }
    public:
        const_iterator operator++(){
            curr_=curr_->next_;
            return *this;
        }
        const_iterator operator++(int){

        }
        const T& operator*() const{
            T rc=T{};
            if(curr_){
                return curr_->data_;
            }
            return rc;
        }
        bool operator==(const_iterator right) const ;
        bool operator!=(const_iterator right) const {
            return (curr_ != right.curr_);
        }
    };
    class iterator: public const_iterator{
        friend class SList;
        iterator(Node* curr):const_iterator(curr){}
    public:
        T& operator*(){
            if(const_iterator::curr_){
                return const_iterator::curr_->data_;
            }          
        }     
    };
    iterator begin(){
        return iterator(first_);
    }
    const_iterator begin() const{
        return const_iterator(first_);
    }
    iterator end(){
        return iterator(nullptr);
    }
    const_iterator end() const{
        return const_iterator(nullptr);
    }
    SList(){
        first_=last_=nullptr;
    }
    void pushFront(const T& data){
        Node* nn=new Node(data,first_);
        first_=nn;
        if(last_==nullptr){
            last_=nn;
        }
    }
    void pushBack(const T& data){
        Node* nn=new Node(data);
        if(first_==nullptr){
            first_=nn;
            last_=nn;
        }
        else{
            last_->next_=nn;
            last_=nn;
        }
    }
    void popFront();
    void popBack();
    ~SList(){
        
    }
};








