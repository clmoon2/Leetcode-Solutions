class Solution {
    unordered_map<Node*, Node*> visited;
public:
    Node* cloneGraph(Node* node) {
        
        //use  a hashmap to track the already cloned nodes

        //recursively iterate through the graph until completion

            
            if(!node) return nullptr;
            //if already clones return the clone
            if (visited.find(node) != visited.end()) {
                return visited[node];
            }
            //create a new node
            Node* clone = new Node(node->val);
            visited[node] = clone;
            //clone neighbors recursively
            for (Node* nei : node->neighbors) {
                clone->neighbors.push_back(cloneGraph(nei));
            }

            return clone;
        }
    };
    
