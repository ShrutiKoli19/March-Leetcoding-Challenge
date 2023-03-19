class TrieNode{
public:
    bool end;
    TrieNode* children[26];

    TrieNode() {
        end = false;
        memset(children, 0, sizeof(children));
    }
};

class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        
        TrieNode* node = root;
        for(char c: word){

            if(node->children[c-'a'] == NULL){
                node->children[c - 'a'] = new TrieNode();
            }

            node = node->children[c - 'a'];
        }

        node->end = true;
    }
    
    bool search(string word) {
        return SearchNode(word, root);
    }

    bool SearchNode(string word, TrieNode* node){

        for(int i = 0; i<word.length(); i++){

            char ch = word[i];
            if(ch == '.'){
                for(auto c: node->children){
                    if(c && SearchNode(word.substr(i+1), c)){
                        return true;
                    }
                }

                return false;
            }

            int id = ch - 'a';
            if(node->children[id] == NULL){
                return false;
            }

            node = node->children[id];
        }

        return node->end;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
