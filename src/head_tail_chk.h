#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Class to manage DataFrame names
class DataFrameManager {
private:
    std::vector<std::string> df_names; // List to store DataFrame names

public:
    // Function to add a DataFrame name to the list
    void addDataFrame(const std::string& df_name) {
        // Check if the DataFrame name is already in the list
        if (std::find(df_names.begin(), df_names.end(), df_name) != df_names.end()) {
            //std::cout << "DataFrame '" << df_name << "' already exists in the list.\n";
        } else {
            df_names.push_back(df_name);
            //std::cout << "DataFrame '" << df_name << "' added to the list.\n";
        }
    }

    // Function to check if a DataFrame name exists in the list
    bool isDataFramePresent(const std::string& df_name) const {
        return std::find(df_names.begin(), df_names.end(), df_name) != df_names.end();
    }

    // Function to print all DataFrame names in the list
    void printDataFrameNames() const {
        if (df_names.empty()) {
            std::cout << "No DataFrame names in the list.\n";
        } else {
            std::cout << "DataFrame names in the list:\n";
            for (const auto& name : df_names) {
                std::cout << "- " << name << "\n";
            }
        }
    }
};


