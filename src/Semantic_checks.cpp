#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stdexcept>
#include <algorithm>

class SemanticAnalyzer {
private:
    std::map<std::string, std::string> column_types; // Stores column names and their types (e.g., numeric, string).
    std::set<std::string> allowed_functions = {
        "read", "head", "tail", "reset_index", "to_csv", "describe", "mean",
        "sum", "min", "max", "mode", "median", "miss_value",
        "exchange", "concat", "merge"
    };

    // Allowed parameter dataframes for functions.
    std::map<std::string, std::set<std::string>> function_parameters = {
        {"read", {"csv_file", "sep", "header", "index_col", "index", "usecols"}},
        {"head", {"intnum"}},
        {"tail", {"intnum"}},
        {"reset_index", {"drop", "inplace"}},
        {"to_csv", {"csv_file", "sep", "header", "index_col", "index", "usecols"}},
        {"describe", {}},
        {"mean", {"axis", "numeric", "skipna", "usecols"}},
        {"sum", {"axis", "numeric", "skipna", "usecols"}},
        {"min", {"axis", "numeric", "skipna", "usecols"}},
        {"max", {"axis", "numeric", "skipna", "usecols"}},
        {"mode", {"axis", "numeric", "skipna", "usecols"}},
        {"median", {"axis", "numeric", "skipna", "usecols"}},
        {"fill_missing", {"fill", "drop", "method", "inplace"}},
        {"exchange", {"regx_single_quoted_string", "value", "axis", "inplace"}},
        {"concat", {"dataframe", "axis"}},
        {"merge", {"dataframe", "how_token", "on_token", "suffixes_token"}}
    };

public:
    SemanticAnalyzer(const std::map<std::string, std::string>& column_types)
        : column_types(column_types) {}

    void checkFunction(const std::string& function_name, const std::map<std::string, std::string>& parameters) const {
        // Check if the function is allowed.
        if (allowed_functions.find(function_name) == allowed_functions.end()) {
            throw std::runtime_error("Error: Function '" + function_name + "' is not defined in the DSL.");
        }

        // Check parameter validity.
        auto it = function_parameters.find(function_name);
        if (it == function_parameters.end()) {
            throw std::runtime_error("Error: Parameters for function '" + function_name + "' are undefined.");
        }

        const auto& valid_params = it->second;
        for (const auto& param : parameters) {
            if (valid_params.find(param.first) == valid_params.end()) {
                throw std::runtime_error("Error: Invalid parameter '" + param.first + "' for function '" + function_name + "'.");
            }
        }
    }

    void checkMandatoryParameters(const std::string& function_name, const std::map<std::string, std::string>& parameters, const std::set<std::string>& mandatory_params) const {
    for (const auto& param : mandatory_params) {
        if (parameters.find(param) == parameters.end()) {
            throw std::runtime_error("Error: Missing mandatory parameter '" + param + "' for function '" + function_name + "'.");
        }
    }
    }

    void checkColumnExists(const std::string& column_name) const {
        if (column_types.find(column_name) == column_types.end()) {
            throw std::runtime_error("Error: Column '" + column_name + "' does not exist in the DataFrame.");
        }
    }

    void checkDataFrameExists(const std::string& dataframe_name) const {
    // Simulate checking for the existence of a dataframe.
    std::set<std::string> valid_dataframes = {"df1", "df2", "df3"};
    if (valid_dataframes.find(dataframe_name) == valid_dataframes.end()) {
        throw std::runtime_error("Error: DataFrame '" + dataframe_name + "' does not exist.");
    }
    }

    void checkTypeCompatibility(const std::string& column_name, const std::string& expected_type) const {
        auto it = column_types.find(column_name);
        if (it == column_types.end()) {
            throw std::runtime_error("Error: Column '" + column_name + "' does not exist.");
        }

        if (it->second != expected_type) {
            throw std::runtime_error("Error: Type mismatch for column '" + column_name + "'. Expected type: " + expected_type +
                                     ", Found: " + it->second);
        }
    }

    void analyzeRead(const std::map<std::string, std::string>& parameters) const {
        checkFunction("read", parameters);
        checkMandatoryParameters("read", parameters, {"csv_file"});

        // Check for valid separator (optional example).
        auto it = parameters.find("sep");
        if (it != parameters.end() && it->second != "," && it->second != ";") {
            throw std::runtime_error("Error: Invalid separator '" + it->second + "'. Allowed values are ',' and ';'.");
        }
    }

    void analyzeAggregateFunction(const std::string& function_name, const std::string& column_name) const {
        checkFunction(function_name, {{"axis", "0"}});
        checkColumnExists(column_name);
        checkTypeCompatibility(column_name, "numeric");
    }

    void analyzeConcat(const std::vector<std::string>& dataframes, int axis) const {
    checkFunction("concat", {{"axis", std::to_string(axis)}});
    
    for (const auto& dataframe : dataframes) {
        checkDataFrameExists(dataframe); 
    }

    if (axis != 0 && axis != 1) {
        throw std::runtime_error("Error: Invalid axis value '" + std::to_string(axis) + "'. Allowed values are 0 and 1.");
    }
}


    void analyzeMerge(const std::string& dataframe, const std::string& how_token) const {
    checkFunction("merge", {{"dataframe", dataframe}, {"how_token", how_token}});
    checkDataFrameExists(dataframe);  
    if (how_token != "inner" && how_token != "outer" && how_token != "left" && how_token != "right") {
        throw std::runtime_error("Error: Invalid merge type '" + how_token + "'. Allowed values are 'inner', 'outer', 'left', 'right'.");
    }
}

};
