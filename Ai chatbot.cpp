
#include <iostream>
#include <string>
#include <unordered_map>

std::string getResponse(const std::string& input) {
    std::unordered_map<std::string, std::string> responses = {
        {"hello", "Hi there! How can I help you today?"},
        {"how are you", "I'm just a bunch of code, but I'm here to help!"},
        {"bye", "Goodbye! Have a great day!"},
     
    };

   
    std::string lowerInput = input;
    for (char& c : lowerInput) {
        c = tolower(c);
    }

  
    if (responses.find(lowerInput) != responses.end()) {
        return responses[lowerInput];
    } else {
        return "I'm sorry, I don't understand that.";
    }
}

int main() {
    std::string userInput;
    std::cout << "Welcome to the AI Chatbot! Type 'bye' to exit." << std::endl;

    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, userInput);

        if (userInput == "bye") {
            std::cout << "Chatbot: Goodbye! Have a great day!" << std::endl;
            break;
        }

        std::string response = getResponse(userInput);
        std::cout << "Chatbot: " << response << std::endl;
    }

    return 0;
}

