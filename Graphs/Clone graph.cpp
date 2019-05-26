/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    
    if(node==NULL){
        return NULL;
    }
    
    //set<UndirectedGraphNode* >s;
    
    //maps old graph's nodes with new ones
    map <UndirectedGraphNode*,UndirectedGraphNode*> m;
    
    //contains old graph's nodes
    queue<UndirectedGraphNode*> q;
    
    UndirectedGraphNode* src = new UndirectedGraphNode(node->label);
    q.push(node);
    //s.insert(src);
    m[node] = src;
    
    while(!q.empty()){
        UndirectedGraphNode* u = q.front();
        q.pop();
        vector <UndirectedGraphNode *> v = u->neighbors;
        
        int n = v.size();
        for(int i=0;i<n;i++){
            if(m[v[i]] == NULL){
                UndirectedGraphNode* temp = new UndirectedGraphNode(v[i]->label);
                m[v[i]] = temp;
                q.push(v[i]);
            }
            m[u]->neighbors.push_back(m[v[i]]);
        }
    }
    
    return src;
}
