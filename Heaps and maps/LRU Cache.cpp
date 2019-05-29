#include<bits/stdc++.h>

unordered_map <int,int> m;
list <int> l;
int cap = 0;

LRUCache::LRUCache(int capacity) {
    cap = capacity;
    m.clear();
    l.clear();
}

int LRUCache::get(int key) {
    if(m.find(key) != m.end()){
        l.remove(key);
        l.push_back(key);
        return m[key];
        
    }
    else{
        return -1;
    }
}

void LRUCache::set(int key, int value) {
    

    if(m.find(key) == m.end()){
        if(l.size() == cap){
            int x = l.front();
            l.erase(l.begin());
            m.erase(x);
        }
        m[key] = value;
        l.push_back(key);
    }
    else{
        l.remove(key);
        l.push_back(key);
        m[key] = value;
    }
    
}
