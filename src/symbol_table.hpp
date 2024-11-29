#include <iostream>
#include <unordered_map>


using namespace ::std;


template<typename Key, typename Value>
class ST{
    private:
        std::unordered_map<Key, Value> symbol_table;
    public:
        ST() = default;
        void put(const Key& key, const Value& val){
            // symbol_table[key] = val;
            symbol_table.insert({key, val});

        }
        Value get(const Key& key){
            auto it = symbol_table.find(key);
            if(it != symbol_table.end()){
                return it -> second;
            }
            throw std::runtime_error("Key not found");
        }
        void remove(const Key& key){
            symbol_table.erase(key);
        }
        bool contains(const Key& key){
            if(symbol_table.find(key) != symbol_table.end()){
                return true;
            }else{
                return false;
            }
        }
        int size(){
            return symbol_table.size();
        }
};


struct SymbolInfo {
    std::string token_name;  // Name of the token
    int line_number;         // Line number
    int column_number;       // Column number
    std::string type;        // Type of the token (e.g., keyword, identifier)

    // Constructor for easy initialization
    SymbolInfo(std::string name, int line, int column, std::string token_type)
        : token_name(std::move(name)), line_number(line), column_number(column), type(std::move(token_type)) {}
};

// int main() {
//     // Create a symbol table with string keys and SymbolInfo values
//     ST<std::string, SymbolInfo> symbolTable;

//     // Add entries to the symbol table
//     symbolTable.put("x", SymbolInfo("x", 1, 5, "identifier"));
//     symbolTable.put("if", SymbolInfo("if", 2, 1, "keyword"));

//     // Retrieve and print an entry
//     try {
//         SymbolInfo info = symbolTable.get("x");
//         std::cout << "Token Name: " << info.token_name
//                   << ", Line: " << info.line_number
//                   << ", Column: " << info.column_number
//                   << ", Type: " << info.type << std::endl;
//     } catch (const std::runtime_error& e) {
//         std::cout << e.what() << std::endl;
//     }

//     return 0;
// }
