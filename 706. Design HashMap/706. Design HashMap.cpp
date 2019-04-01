
class MyHashMap {

    class pair1
    {
     
      public:
         int key;
      int value;  
        pair1(int a,int b)
        {
            key = a;
            value = b;
        }
    };
    vector<list<pair1>> v;
    //list <pair> l; no need
    int hash(const pair1 & k)
    {
        int index = k.key%10000;
        return index;
    }
    
public:
    
    
    
    
    
    /** Initialize your data structure here. */
    MyHashMap() {
        v.resize(10000);
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
         int index =  key%10000;
         pair1 p (key,value); 
         if(v[index].empty())
         {
            v[index].push_front(p); 
         }
         else
         {
             for(auto i = v[index].begin();i!=v[index].end();i++)
             {
                 if(i->key == key)//update
                 {
                     i->value = value;
                     return;
                 }
             }
             //not found 
             v[index].push_front(p);
         }
            
            
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int index = key%10000;
        if(v[index].empty())
         {
            return -1;
         }
        else
        {
             for(auto i = v[index].begin();i!=v[index].end();i++)
             {
                 if(i->key == key)//exist
                 {
                     return i->value;
                 }
             }
            //not found
            return -1;
        }
        
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int index = key%10000;
        if(v[index].empty())
         {
            return ;
         }
        else
        {
             for(auto i = v[index].begin();i!=v[index].end();i++)
             {
                 if(i->key == key)//exist
                 {
                    
                      i =v[index].erase(i);
                      i--;
  
                 }
             }
            //not found
            //return -1;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
